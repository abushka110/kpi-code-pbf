import tkinter as tk
import tkinter.messagebox
import re

def check_credentials():
    username = username_entry.get()
    password = password_entry.get()

    username_pattern = "^[a-zA-Z0-9_]*$"
    password_pattern = r"^[a-zA-Z0-9!@#$%^&*()_\-{}[\]:;<>?]*$"

    if (re.fullmatch(username_pattern, username) is None) or (re.fullmatch(password_pattern, password) is None) or len(password) < 8:
        error_message = "Неправильно введені дані в полі(ях):\n"
        if re.fullmatch(username_pattern, username) is None:
            error_message += "Логін: тільки символи англійського алфавіту, цифри та знак нижнього підкреслювання.\n"
        if re.fullmatch(password_pattern, password) is None or len(password) < 8:
            error_message += "Пароль: мінімум 8 символів, тільки англійські літери, цифри і спеціальні символи (окрім +, =, ;, :, “, ”, ‘, ’, /, \\, |, пробілу та коми)."
        tkinter.messagebox.showerror("Помилка", error_message)
    else:
        welcome_window = tk.Toplevel(root)
        welcome_label = tk.Label(welcome_window, text="Вітаємо! Ви успішно увійшли в основну програму")
        welcome_label.pack()

root = tk.Tk()

username_label = tk.Label(root, text="Логін")
username_label.pack()
username_entry = tk.Entry(root)
username_entry.pack()

password_label = tk.Label(root, text="Пароль")
password_label.pack()
password_entry = tk.Entry(root, show="*")
password_entry.pack()

login_button = tk.Button(root, text="Увійти", command=check_credentials)
login_button.pack()

exit_button = tk.Button(root, text="Вихід", command=root.quit)
exit_button.pack()

root.mainloop()