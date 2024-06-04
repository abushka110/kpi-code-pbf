import tkinter as tk
from matplotlib.figure import Figure
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
import numpy as np

# Функція для побудови графіку синуса
def plot_sine():
    color = color_var.get()  # Отримуємо вибраний колір
    x = np.linspace(0, 10*np.pi, 1000)  # Генеруємо масив x-значень від 0 до 10π
    y = np.sin(x)  # Обчислюємо відповідні y-значення як синус x
    ax.clear()  # Очищуємо поточний графік
    ax.plot(x, y, color=color)  # Будуємо графік y проти x у вибраному кольорі
    canvas.draw()  # Відображаємо графік

# Функція для очищення графіку
def clear_plot():
    ax.clear()  # Очищуємо поточний графік
    canvas.draw()  # Відображаємо пустий графік

root = tk.Tk()  # Створюємо головне вікно

fig = Figure(figsize=(5, 4), dpi=100)  # Створюємо фігуру для графіку
ax = fig.add_subplot(111)  # Додаємо осі до фігури
canvas = FigureCanvasTkAgg(fig, master=root)  # Створюємо полотно для відображення фігури
canvas.draw()  # Відображаємо фігуру
canvas.get_tk_widget().pack(side=tk.TOP, fill=tk.BOTH, expand=1)  # Додаємо полотно до головного вікна

color_var = tk.StringVar(value='blue')  # Створюємо змінну для зберігання вибраного кольору
color_rb = tk.Radiobutton(root, text='Color', variable=color_var, value='blue')  # Створюємо радіокнопку для вибору кольору
color_rb.pack()  # Додаємо радіокнопку до головного вікна

plot_button = tk.Button(root, text="Побудувати графік", command=plot_sine)  # Створюємо кнопку для побудови графіку
plot_button.pack()  # Додаємо кнопку до головного вікна

clear_button = tk.Button(root, text="Очистити графік", command=clear_plot)  # Створюємо кнопку для очищення графіку
clear_button.pack()  # Додаємо кнопку до головного вікна

tk.mainloop()  # Запускаємо основний цикл обробки подій tkinter