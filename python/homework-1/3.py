num_A = int(input("Введіть число A: "))
num_B = int(input("Введіть число B: "))
num_C = int(input("Введіть число C: "))

# знаходження максимального та мінімального значень 
# за допомогою функцій max() та min()
max_number = max(num_A, num_B, num_C)
min_number = min(num_A, num_B, num_C)

# Виведення результату з використанням f-рядків
print(f"Максимальне число: {max_number}")
print(f"Мінімальне число: {min_number}")