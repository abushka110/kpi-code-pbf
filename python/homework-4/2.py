import math

class Triangle:
    def __init__(self, side_a, side_b, side_c):
        self.side_a = side_a
        self.side_b = side_b
        self.side_c = side_c

    def calculate_midline(self, side):
        # Обчислення середньої лінії для заданої сторони
        if side == "a":
            return self.side_b / 2 + self.side_c / 2
        elif side == "b":
            return self.side_a / 2 + self.side_c / 2
        elif side == "c":
            return self.side_a / 2 + self.side_b / 2
        else:
            return None

    def resize_sides(self, percentage):
        # Збільшення/зменшення розміру сторін на задану кількість відсотків
        self.side_a *= 1 + percentage / 100
        self.side_b *= 1 + percentage / 100
        self.side_c *= 1 + percentage / 100

    def calculate_angles(self):
        # Визначення кутів трикутника
        angle_a = math.degrees(math.acos((self.side_b**2 + self.side_c**2 - self.side_a**2) / (2 * self.side_b * self.side_c)))
        angle_b = math.degrees(math.acos((self.side_a**2 + self.side_c**2 - self.side_b**2) / (2 * self.side_a * self.side_c)))
        angle_c = 180 - angle_a - angle_b
        return angle_a, angle_b, angle_c

    def determine_triangle_type(self):
        # Визначення виду трикутника за величиною кутів
        angles = self.calculate_angles()
        if all(angle < 90 for angle in angles):
            return "Гострокутний трикутник"
        elif any(angle == 90 for angle in angles):
            return "Прямокутний трикутник"
        else:
            return "Тупокутний трикутник"


# Приклад використання:
triangle1 = Triangle(3, 4, 5)
print("Середня лінія для сторони A:", triangle1.calculate_midline("a"))
print("Середня лінія для сторони B:", triangle1.calculate_midline("b"))
print("Середня лінія для сторони C:", triangle1.calculate_midline("c"))

print("\nРозмір сторін трикутника до змін:")
print("Side A:", triangle1.side_a)
print("Side B:", triangle1.side_b)
print("Side C:", triangle1.side_c)

triangle1.resize_sides(10)

print("\nРозмір сторін трикутника після збільшення на 10%:")
print("Side A:", triangle1.side_a)
print("Side B:", triangle1.side_b)
print("Side C:", triangle1.side_c)

print("\nКути трикутника:", triangle1.calculate_angles())
print("Вид трикутника:", triangle1.determine_triangle_type())
