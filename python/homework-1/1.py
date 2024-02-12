import math

# Зчитування введених користувачем значень
A = int(input("Введіть число a (в градусах): "))
B = int(input("Введіть число b (в градусах): "))
C = int(input("Введіть число c: "))

# Обчислення косинусу суми кутів a і b в радіанах
cos_a_b = math.cos(math.radians(A) + math.radians(B))

# Обчислення 10 в ступені cosAB
pow_Of_Ten = pow(10, cos_a_b)

# Виведення результату у вигляді рядка
print(f"y = {powOfTen * c}")
