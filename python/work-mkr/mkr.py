import tkinter as tk
from matplotlib.figure import Figure
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
import math

# Функція для побудови графіку синуса
def plot_sine():
    color = color_var.get()  # отримання вибраного кольору
    x = [i * 0.01 * math.pi for i in range(1000)]  # генерація масиву x-значень від 0 до 10π
    y = [math.sin(i) for i in x]  # обчислення y-значення як синус x
    ax.clear()  # очищення графіку
    ax.plot(x, y, color=color)  # побудова графіку
    canvas.draw()

# Функція для очищення графіку
def clear_plot():
    ax.clear()
    canvas.draw() # відобразить пустий графік

root = tk.Tk()

fig = Figure(figsize=(5, 4), dpi=100)  # фігура для графіку
# осі до фігури, перша цифра - кількість рядків, друга - кількість стовпців, третя - індекс поточного subplot в сітці
ax = fig.add_subplot(111)  
canvas = FigureCanvasTkAgg(fig, master=root)  # полотно для відображення фігури
canvas.draw()
canvas.get_tk_widget().pack(side=tk.TOP, fill=tk.BOTH, expand=1)

color_var = tk.StringVar(value='blue')  # змінна для зберігання вибраного кольору

# Frame для radio buttons
radio_frame = tk.Frame(root)
radio_frame.pack(side = tk.LEFT)

# radio buttons для вибору кольору
colors = ['yellow', 'green', 'blue', 'red', 'brown', 'black']
for color in colors:
    color_rb = tk.Radiobutton(radio_frame, text=color, variable=color_var, value=color)
    color_rb.pack()

# Frame для кнопок графіку
buttons_frame = tk.Frame(root)
buttons_frame.pack(side = tk.RIGHT)

plot_button = tk.Button(buttons_frame, text="Побудувати графік", command=plot_sine)  # кнопка для побудови графіку
plot_button.pack() # додає кнопку до Frame

clear_button = tk.Button(buttons_frame, text="Очистити графік", command=clear_plot)  # кнопка для очищення графіку
clear_button.pack()

tk.mainloop()  # запуск основного циклу обробки подій tkinter