import math

class Figure:
    def __init__(self, figureType):
        self.figureType = figureType

    def getArea(self):
        pass

    def getFigureType(self) -> str:
        return self.figureType


class Rectangle(Figure):
    def __init__(self, width, height):
        super().__init__("Квадрат")
        self.width = width
        self.height = height

    def getArea(self):
        return self.width * self.height


class Triangle(Figure):
    def __init__(self, base, height):
        super().__init__("Трикутник")
        self.base = base
        self.height = height

    def getArea(self):
        return 0.5 * self.base * self.height


class Circle(Figure):
    def __init__(self, radius):
        super().__init__("Коло")
        self.radius = radius

    def getArea(self):
        return math.pi * (self.radius ** 2)