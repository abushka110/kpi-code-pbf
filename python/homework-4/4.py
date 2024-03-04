import math

class Triangle:
    def __init__(self, side, angle1, angle2):
        self.side = side
        self.angle1 = angle1
        self.angle2 = angle2

    @property
    def side(self):
        return self._side

    @side.setter
    def side(self, value):
        if value <= 0:
            raise ValueError("Сторона трикутника повинна бути додатньою")
        self._side = value

    @property
    def angle1(self):
        return self._angle1

    @angle1.setter
    def angle1(self, value):
        if value < 0 or value >= 180:
            raise ValueError("Кут має бути в межах від 0 до 180 градусів")
        self._angle1 = value

    @property
    def angle2(self):
        return self._angle2

    @angle2.setter
    def angle2(self, value):
        if value < 0 or value >= 180:
            raise ValueError("Кут має бути в межах від 0 до 180 градусів")
        self._angle2 = value

    def increase_angle(self, angle, percent):
        if angle == 1:
            self.angle1 += self.angle1 * percent / 100
        elif angle == 2:
            self.angle2 += self.angle2 * percent / 100
        else:
            raise ValueError("Невірний номер кута. Використовуйте 1 або 2.")

    def decrease_angle(self, angle, percent):
        if angle == 1:
            self.angle1 -= self.angle1 * percent / 100
        elif angle == 2:
            self.angle2 -= self.angle2 * percent / 100
        else:
            raise ValueError("Невірний номер кута. Використовуйте 1 або 2.")

    def height(self, side_index):
        if side_index == 1:
            return self.side * math.sin(math.radians(self.angle2))
        elif side_index == 2:
            return self.side * math.sin(math.radians(self.angle1))
        else:
            raise ValueError("Невірний номер сторони. Використовуйте 1 або 2.")

    def calculate_sides(self):
        side_a = self.side
        side_b = self.height(1) / math.sin(math.radians(self.angle2))
        side_c = self.height(2) / math.sin(math.radians(self.angle1))
        return side_a, side_b, side_c

# Приклад використання класу Трикутник
triangle = Triangle(side=5, angle1=30, angle2=60)

print("Початкові значення:")
print("Сторона:", triangle.side)
print("Кут 1:", triangle.angle1)
print("Кут 2:", triangle.angle2)

triangle.increase_angle(1, 10)
print("\nПісля збільшення кута 1 на 10%:")
print("Кут 1:", triangle.angle1)

print("\nВисота до сторони 1:", triangle.height(1))
print("Висота до сторони 2:", triangle.height(2))

sides = triangle.calculate_sides()
print("\nОбчислені значення сторін:")
print("Сторона a:", sides[0])
print("Сторона b:", sides[1])
print("Сторона c:", sides[2])
