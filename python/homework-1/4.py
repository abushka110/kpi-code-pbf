# імпорт математичного модуля
import math

# Зчитування введених користувачем значень
a = float(input("Введіть число A: "))
b = float(input("Введіть число B: "))
c = float(input("Введіть число C: "))

# обчислення суму та півпериметр
sum_ABC = a + b + c
p = sum_ABC / 2

# обчислення різниць між півпериметром та числами
p_minus_a = p - a
p_minus_b = p - b
p_minus_c = p - c

# розрахунок площі за формулою Герона
s = math.sqrt(p * p_minus_a * p_minus_b * p_minus_c)