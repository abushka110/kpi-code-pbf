import math

class Circle:
    def __init__(self, x, y, r):
        self.x = x
        self.y = y
        self.__r = r

    @property
    def r(self):
        return self.__r

    @r.setter
    def r(self, value):
        if isinstance(value, int) and 1 <= value <= 10:
            self.__r = value

    def calculate_circumference(self):
        return 2 * math.pi * self.__r

    def calculate_area(self):
        return math.pi * (self.__r ** 2)