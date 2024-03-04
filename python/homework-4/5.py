import math

class Parallelogram:
    def __init__(self, side1, side2, diagonal):
        self.side1 = side1
        self.side2 = side2
        self.diagonal = diagonal

    def increase_size(self, factor):
        self.side1 *= factor
        self.side2 *= factor
        self.diagonal *= factor

    def decrease_size(self, factor):
        self.side1 /= factor
        self.side2 /= factor
        self.diagonal /= factor

    def calculate_perimeter_sqrt(self):
        perimeter = 2 * (self.side1 + self.side2)
        return math.sqrt(perimeter)

    def calculate_area_sqrt(self):
        area = self.side1 * self.side2
        return math.sqrt(area)

    def calculate_diagonal(self):
        return math.sqrt(self.side1**2 + self.side2**2 + 2 * self.side1 * self.side2 * math.cos(math.pi / 3))

    def calculate_height(self):
        return 2 * self.calculate_area_sqrt() / self.side1

# test
parallelogram = Parallelogram(side1=3, side2=4, diagonal=5)

print("Діагональ паралелограма:", parallelogram.calculate_diagonal())
print("Висота паралелограма:", parallelogram.calculate_height())

parallelogram.increase_size(2)
print("Нова діагональ після збільшення розміру:", parallelogram.calculate_diagonal())
