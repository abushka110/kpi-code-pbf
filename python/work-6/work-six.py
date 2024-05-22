# 3
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
            print("Ім'я повинно містити від 2 до 20 символів")

    @property
    def number(self):
        return self.__number

    @number.setter
    def number(self, value):
        error_message = self.validate_number(value)
        if error_message:
            print(error_message)
        else:
            self.__number = value
            print("Номер додано")

    def validate_number(self, number):
        valid_signs = "1234567890-+ "
        for i in range(len(number)):
            if number[i] not in valid_signs:
                return "Номер має містити тільки цифри, риски, пробіли та знак + (тільки як перший символ)."
            if i > 0 and number[i] in "-+":
                return "Риски або знак + не можуть йти поспіль більше однієї."
            if i > 0 and number[i] == " " and number[i-1] in "- ":
                return "За рискою або пробілом не може йти пробіл."
        return None

# test
if __name__ == "__main__":
    subscriber = Subscriber("John")
    print(subscriber.name)  # John
    print(subscriber.number)  # Номер відсутній
    print()
    subscriber.name = "John Doe"
    print(subscriber.name)  # John Doe
    print()
    subscriber.number = "+380631112233"
    print(subscriber.number)  # +380631112233
    print()
    subscriber.number = "+38067--111-22-33"  # Invalid number format
    print(subscriber.number)  # +380631112233
    print()
    subscriber.number = "050 -111- 22 -33"  # Invalid number format
    print(subscriber.number)  # +380631112233
    print()
    subscriber.number = "No0631112233"  # Invalid number format
    print(subscriber.number)  # +380631112233
    print()
    subscriber.number = "096АА11d33"  # Invalid number format
    print(subscriber.number)  # +380631112233