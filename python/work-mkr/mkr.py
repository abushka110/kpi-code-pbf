import tkinter as tk
from matplotlib.figure import Figure
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
import numpy as np

def plot_sine():
    color = color_var.get()
    x = np.linspace(0, 10*np.pi, 1000)
    y = np.sin(x)
    ax.clear()
    ax.plot(x, y, color=color)
    canvas.draw()

def clear_plot():
    ax.clear()
    canvas.draw()

root = tk.Tk()

fig = Figure(figsize=(5, 4), dpi=100)
ax = fig.add_subplot(111)
canvas = FigureCanvasTkAgg(fig, master=root)
canvas.draw()
canvas.get_tk_widget().pack(side=tk.TOP, fill=tk.BOTH, expand=1)

color_var = tk.StringVar(value='blue')
color_rb = tk.Radiobutton(root, text='Color', variable=color_var, value='blue')
color_rb.pack()

plot_button = tk.Button(root, text="Побудувати графік", command=plot_sine)
plot_button.pack()

clear_button = tk.Button(root, text="Очистити графік", command=clear_plot)
clear_button.pack()

tk.mainloop()