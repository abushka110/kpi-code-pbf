import tkinter as tk
from tkinter import filedialog
from collections import Counter
import re

def load_file():
    filename = filedialog.askopenfilename()
    with open(filename, 'r') as file:
        text.delete('1.0', tk.END)
        text.insert(tk.END, file.read())

def count_words():
    words = re.findall(r'\b\w+\b', text.get('1.0', tk.END))
    word_counts = Counter(words)
    listbox.delete(0, tk.END)
    for word, count in word_counts.items():
        listbox.insert(tk.END, f'{word}: {count}')

root = tk.Tk()

menu = tk.Menu(root)
root.config(menu=menu)
file_menu = tk.Menu(menu)
menu.add_cascade(label="File", menu=file_menu)
file_menu.add_command(label="Open...", command=load_file)

text = tk.Text(root)
text.pack()

button = tk.Button(root, text="Count Words", command=count_words)
button.pack()

listbox = tk.Listbox(root)
listbox.pack()

root.mainloop()