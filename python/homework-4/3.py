import math

class Triangle:
    def __init__(self, side1, side2, angle):
        self.side1 = side1
        self.side2 = side2
        self.angle = angle

    def calculate_angles(self):
        angle3 = 180 - self.angle - 90  # Трикутник завжди має суму кутів 180 градусів
        return self.angle, 90, angle3

    def change_angle_size(self, percentage_change):
        self.angle *= (1 + percentage_change / 100)

    def determine_triangle_type(self):
        if self.side1 == self.side2 == math.sqrt(2 * self.side1**2 * (1 - math.cos(math.radians(self.angle)))): 
            return "Рівносторонній трикутник"
        elif self.side1 == self.side2 or self.side1 == math.sqrt(self.side2**2 + self.side2**2 - 2 * self.side1 * self.side2 * math.cos(math.radians(self.angle))):
            return "Рівнобедренний трикутник"
        else:
            return "Різносторонній трикутник"

    def calculate_circumcircle_radius(self):
        circumcircle_radius = (self.side1 * self.side2 * math.sin(math.radians(self.angle))) / (2 * math.sqrt((self.side1**2 + self.side2**2 - 2 * self.side1 * self.side2 * math.cos(math.radians(self.angle)))))
        return circumcircle_radius

    def calculate_incircle_radius(self):
        inradius = (self.side1 * self.side2 * math.sin(math.radians(self.angle / 2))) / (self.side1 + self.side2 + math.sqrt(self.side1**2 + self.side2**2 - 2 * self.side1 * self.side2 * math.cos(math.radians(self.angle))))
        return inradius

# test
triangle = Triangle(3, 4, 45)
print("Кути трикутника:", triangle.calculate_angles())

triangle.change_angle_size(10)
print("Кути трикутника після збільшення:", triangle.calculate_angles())

print("Тип трикутника:", triangle.determine_triangle_type())

circumcircle_radius = triangle.calculate_circumcircle_radius()
incircle_radius = triangle.calculate_incircle_radius()
print("Радіус описаного кола:", circumcircle_radius)
print("Радіус вписаного кола:", incircle_radius)
