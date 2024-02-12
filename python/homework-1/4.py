# імпорт математичного модуля
import math

# Зчитування введених користувачем значень
A = float(input("Введіть число A: "))
B = float(input("Введіть число B: "))
C = float(input("Введіть число C: "))

# обчислення суму та півпериметр
sum_ABC = A + B + C
P = sum_ABC / 2

# обчислення різниць між півпериметром та числами
p_minus_a = P - A
p_minus_b = P - B
p_minus_c = P - C

# розрахунок площі за формулою Герона
s = math.sqrt(P * p_minus_a * p_minus_b * p_minus_c)