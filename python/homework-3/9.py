# solution
import math

def is_prime(n):
    if n <= 1 or (n % 2 == 0 and n > 2): 
        return False
    return all(n % i for i in range(3, int(math.sqrt(n)) + 1, 2))

def triangle_area(a, b, c):
    return 0.5 * a * b * math.sin(math.radians(c))

n = int(input("Введіть кількість трикутників: "))
max_area = 0
max_triangle = 0

for i in range(1, n+1):
    a = int(input(f"Введіть сторону a для трикутника {i}: "))
    b = int(input(f"Введіть сторону b для трикутника {i}: "))
    c = int(input(f"Введіть кут c для трикутника {i}: "))
    
    if not (is_prime(a) and is_prime(b) and is_prime(c)):
        print(f"Некоректний ввод для трикутника {i}. Значення повинні бути простими числами.")
        continue
    
    area = triangle_area(a, b, c)
    if area > max_area:
        max_area = area
        max_triangle = i

print(f"Трикутник з максимальною площею - {max_triangle} з площею {max_area}")