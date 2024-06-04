class Person:
    def __init__(self, name: str, age: int):
        self.__name = name
        self.__age = age

    @property
    def name(self):
        return self.__name

    @name.setter
    def name(self, value):
        if isinstance(value, str) and 2 <= len(value) <= 50:
            self.__name = value

    @property
    def age(self):
        return self.__age

    @age.setter
    def age(self, value):
        if isinstance(value, (int, float)) and 0 <= value <= 125:
            self.__age = value