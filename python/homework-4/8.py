class IntegerNumbers:
    def __init__(self, a, b, c, d):
        self.a = a
        self.b = b
        self.c = c
        self.d = d

    def calculate_average(self):
        return (self.a + self.b + self.c + self.d) / 4

    def find_maximum(self):
        return max(self.a, self.b, self.c, self.d)

    def __str__(self):
        return f"IntegerNumbers(a={self.a}, b={self.b}, c={self.c}, d={self.d})"

    def __del__(self):
        print(f"Object {self} is being destroyed.")

# Введення значень з клавіатури
a = int(input("Enter a: "))
b = int(input("Enter b: "))
c = int(input("Enter c: "))
d = int(input("Enter d: "))

# Створення об'єкту класу IntegerNumbers
numbers_obj = IntegerNumbers(a, b, c, d)

# Виклик методів класу
average_value = numbers_obj.calculate_average()
maximum_value = numbers_obj.find_maximum()

# Виведення результатів
print(f"Average value: {average_value}")
print(f"Maximum value: {maximum_value}")

# Виведення рядка інформації про об'єкт
print(numbers_obj)

# Звільнення пам'яті (виклик деструктора)
del numbers_obj
