# 3
import re

class Subscriber:
    def __init__(self, name):
        self.__name = name
        self.__number = "Номер відсутній"

    @property
    def name(self):
        return self.__name

    @name.setter
    def name(self, value):
        if isinstance(value, str) and 2 <= len(value) <= 20:
            self.__name = value
        else:
            print("Name must be a string of 2 to 20 characters")

    @property
    def number(self):
        return self.__number

    @number.setter
    def number(self, value):
        pattern = r"^(\+)?(\d[\d\s-]*\d)$"
        if re.fullmatch(pattern, value) and "--" not in value and " -" not in value and "- " not in value:
            self.__number = value
        else:
            print("Invalid number format")

# Testing the class
subscriber = Subscriber("John")
print(subscriber.name)  # John
print(subscriber.number)  # Номер відсутній
subscriber.name = "John Doe"
print(subscriber.name)  # John Doe
subscriber.number = "+380631112233"
print(subscriber.number)  # +380631112233
subscriber.number = "+38067--111-22-33"  # Invalid number format
print(subscriber.number)  # +380631112233