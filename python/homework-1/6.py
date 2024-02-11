# Зчитування кількості байтів від користувача
bytes_amount = int(input("Введіть об'єм інформації в байтах: "))

# переведення в кілобайти та мегабайти
kilobytes = bytes_amount / 1024
megabytes = kilobytes / 1024

# Виведення результатів
print(f"Об'єм в кілобайтах: {kilobytes:.2f} KB")
print(f"Об'єм в мегабайтах: {megabytes:.2f} MB")
