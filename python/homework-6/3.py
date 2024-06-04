import math

class Circle:
    def __init__(self, x, y, r):
        self.x = x
        self.y = y
        self.__r = r

    def get_radius(self):
        return self.__r

    def set_radius(self, r):
        self.__r = r

    def calculate_circumference(self):
        return 2 * math.pi * self.__r

    def calculate_area(self):
        return math.pi * (self.__r ** 2)