import tkinter as tk

# Визначаємо курси валют
exchange_rates = {
    "EUR": {
        "USD": 1.07,
        "GBP": 0.84,
        "UAH": 44
    },
    "USD": {
        "EUR": 0.9059350503919373,
        "GBP": 0.7752755150934356,
        "UAH": 40.45
    },
    "GBP": {
        "EUR": 1.1405375139977603,
        "USD": 1.2420731707317072,
        "UAH": 50.925
    },
    "UAH": {
        "EUR": 0.022396416573348264,
        "USD": 0.024390243902439025,
        "GBP": 0.019166267369429803
    }
}

# Визначаємо функцію конвертації
def convert_currency():
    # Отримуємо значення з полів вводу
    amount = float(amount_entry.get())
    from_currency = from_currency_dropdown.get()
    to_currency = to_currency_dropdown.get()

    # Перевіряємо, чи валюти однакові
    if from_currency == to_currency:
        result_label.config(text="Не можна вибрати однакову валюту.")
        return

    # Розраховуємо курс конвертації
    conversion_rate = exchange_rates[from_currency][to_currency]

    # Конвертуємо суму
    converted_amount = amount * conversion_rate

    # Відображаємо конвертовану суму
    result_label.config(text=f"{amount} {from_currency} дорівнює {converted_amount:.2f} {to_currency}.")

# Створюємо головне вікно
window = tk.Tk()
window.title("Конвертер валют")

# Створюємо мітки
amount_label = tk.Label(window, text="Сума:")
from_currency_label = tk.Label(window, text="Валюта з:")
to_currency_label = tk.Label(window, text="Валюта в:")
result_label = tk.Label(window, text="")

# Створюємо поля вводу
amount_entry = tk.Entry(window)
from_currency_dropdown = tk.StringVar(window)
from_currency_dropdown.set("EUR")
to_currency_dropdown = tk.StringVar(window)
to_currency_dropdown.set("USD")

# Створюємо випадаючі списки
from_currency_menu = tk.OptionMenu(
    window, from_currency_dropdown, *exchange_rates.keys()
)
to_currency_menu = tk.OptionMenu(window, to_currency_dropdown, *exchange_rates.keys())

# Створюємо кнопку
convert_button = tk.Button(window, text="Конвертувати", command=convert_currency)

# Розміщуємо віджети
amount_label.pack()
amount_entry.pack()
from_currency_label.pack()
from_currency_menu.pack()
to_currency_label.pack()
to_currency_menu.pack()
convert_button.pack()
result_label.pack()

# Запускаємо головний цикл
window.mainloop()