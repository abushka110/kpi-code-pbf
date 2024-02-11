numA = int(input("Введіть число A: "))
numB = int(input("Введіть число B: "))
numC = int(input("Введіть число C: "))

# знаходження максимального та мінімального значень 
# за допомогою функцій max() та min()
max_number = max(numA, numB, numC)
min_number = min(numA, numB, numC)

# Виведення результату з використанням f-рядків
print(f"Максимальне число: {max_number}")
print(f"Мінімальне число: {min_number}")