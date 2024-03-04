class Rectangle:
    def __init__(self, side_a=1, side_b=1):
        self.side_a = side_a
        self.side_b = side_b

    def get_side_a(self):
        return self.side_a

    def get_side_b(self):
        return self.side_b

    def area(self):
        return self.side_a * self.side_b

    def perimeter(self):
        return 2 * (self.side_a + self.side_b)

    def get_type(self):
        if self.side_a == self.side_b:
            return "Square"
        else:
            return "Rectangle"

# test
rectangle1 = Rectangle(3, 4)
print("Side A:", rectangle1.get_side_a())
print("Side B:", rectangle1.get_side_b())
print("Area:", rectangle1.area())
print("Perimeter:", rectangle1.perimeter())
print("Type:", rectangle1.get_type())

square1 = Rectangle(5)  # Якщо задано тільки одну сторону, то створюється квадрат
print("\nSide A:", square1.get_side_a())
print("Side B:", square1.get_side_b())
print("Area:", square1.area())
print("Perimeter:", square1.perimeter())
print("Type:", square1.get_type())
