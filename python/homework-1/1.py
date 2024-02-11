import math

# Зчитування введених користувачем значень
a = int(input("Введіть число a (в градусах): "))
b = int(input("Введіть число b (в градусах): "))
c = int(input("Введіть число c: "))

# Обчислення косинусу суми кутів a і b в радіанах
cosAB = math.cos(math.radians(a) + math.radians(b))

# Обчислення 10 в ступені cosAB
powOfTen = pow(10, cosAB)

# Виведення результату у вигляді рядка
print(f"y = {powOfTen * c}")
