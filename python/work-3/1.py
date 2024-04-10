def nth_root(a, epsilon, n):
    x = a / n
    # цик виконується за умови, що ε < 1 та a > 0
    while a > 0 and epsilon < 1:
        # формула розрахунку
        new_x = ((n - 1) / n) * x + (a / (n * x**(n - 1)))
        if abs(new_x - x) < epsilon:
            break
        x = new_x
    # повертає помилку, якщо не виконується умова (ε < 1 та a > 0)
    else:
        return("Неправильно введені значення a або ε")
    # повертає x після завершення циклу
    return x

# запит на введення користувачем з клавіатури значень a, n, ε
a = float(input("Введіть значення a: "))
epsilon = float(input("Введіть значення ε: "))
n = float(input("Введіть значення n: "))

print(nth_root(a, epsilon, n))