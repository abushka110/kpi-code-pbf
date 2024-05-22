import tkinter as tk
from tkinter import ttk
import matplotlib.pyplot as plt
import numpy as np
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg

class Application(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title("Графік функції синус")
        self.geometry("500x500")

        self.fig, self.ax = plt.subplots()
        self.canvas = FigureCanvasTkAgg(self.fig, master=self)
        self.canvas.get_tk_widget().pack(side=tk.TOP, fill=tk.BOTH, expand=1)

        self.colors = ["blue", "red", "green", "yellow", "brown", "black"]
        self.color_var = tk.StringVar(value=self.colors[0])

        self.color_selector = ttk.Combobox(self, textvariable=self.color_var, values=self.colors)
        self.color_selector.pack(side=tk.LEFT)

        self.plot_button = tk.Button(self, text="Побудувати графік", command=self.plot_graph)
        self.plot_button.pack(side=tk.LEFT)

        self.clear_button = tk.Button(self, text="Очистити графік", command=self.clear_graph)
        self.clear_button.pack(side=tk.LEFT)

    def plot_sine(self):
        x = np.linspace(0, 2 * np.pi, 100)
        y = np.sin(x)
        self.ax.plot(x, y, color=self.color_var.get())
        self.canvas.draw()

    def plot_graph(self):
        x = np.linspace(0, 10*np.pi, 1000)
        y = np.sin(x)
        self.ax.plot(x, y, color=self.color_var.get())
        self.canvas.draw()

    def clear_graph(self):
        self.ax.clear()
        self.canvas.draw()

if __name__ == "__main__":
    app = Application()
    app.plot_sine()
    app.mainloop()
