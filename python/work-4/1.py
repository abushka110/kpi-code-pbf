import random  # Імпортуємо модуля random для генерації випадкових чисел

class BankAccount:  # Визначення класу BankAccount
    """
    Клас BankAccount представляє банківський рахунок.

    При створенні екземпляра класу необхідно передати ім'я та прізвище власника рахунку та початкову суму грошей.

    Атрибути:
    name (str): Ім'я власника рахунку.
    surname (str): Прізвище власника рахунку.
    account_id (int): Номер рахунку.
    money (float): Сума грошей на рахунку.
    """

    # def __init__(self, name, surname, money, rate):
    def __init__(self, name, surname, money):  # Визначення методу ініціалізації
        self.name = name  # Ініціалізація атрибуту name
        self.surname = surname  # Ініціалізація атрибуту surname
        self.account_id = random.randint(1000000000, 9999999999)  # Генерація випадкового 10-значного account_id
        self.money = money  # Ініціалізація атрибуту money
        # self.rate = rate  # Ініціалізація атрибуту rate

    def info(self):  # метод для виведення інформації про рахунок
        """Виводить загальну інформацію про банківський рахунок."""
        print(f"Власник рахунку: {self.surname} {self.name}")  # Виводиться ім'я та прізвище власника рахунку
        print(f"Номер рахунку: {self.account_id}")  # Виводиться номер рахунку
        print(f"Сума грошей на рахунку: {self.money} гривень")  # Виводиться сума грошей на рахунку

    def change_owner(self, new_name: str, new_surname: str):  # метод для зміни власника рахунку
        """
        Змінює власника рахунку.

        Args:
            new_name (str): Нове ім'я власника рахунку.
            new_surname (str): Нове прізвище власника рахунку.
        """
        self.name = new_name  # Змінюється атрибут name
        self.surname = new_surname  # Змінюється атрибут surname

    def put(self, amount):  # метод для додавання грошей на рахунок
        """
        Додає гроші на рахунок.

        Аргументи:
            amount: Сума грошей для додавання.
        """
        self.money += amount  # Додавання вказаної суми до атрибуту money

    def withdrawal(self, amount):  # метод для зняття грошей з рахунку
        """
        Знімає гроші з рахунку.

        Аргументи:
            amount: Сума грошей для зняття.
        """
        if self.money >= amount:  # Перевірка, чи достатньо грошей на рахунку
            self.money -= amount
        else:
            print("Відмова. На рахунку не вистачає грошей")  # Виводиться повідомлення, якщо грошей недостатньо

    def convert2usd(self, exchange_rate):  # метод для конвертації грошей на рахунку в долари
        """
        Відображає доступну суму грошей на рахунку у доларах за поточним курсом.

        Аргументи:
            exchange_rate: Поточний курс долара до гривні.
        """
        return self.money / exchange_rate  #Повертає суму грошей в доларах
    
# test
if __name__ == "__main__":
    michael_account = BankAccount("Michael", "De Santa", 13000)
    michael_account.info()
    # Власник рахунку: De Santa Michael
    # Номер рахунку: 3364877275
    # Сума грошей на рахунку: 13000 гривень
    michael_account.change_owner("Trevor", "Phillips")
    michael_account.put(1000)
    michael_account.info()
    # Власник рахунку: Phillips Trevor
    # Номер рахунку: 8370434549
    # Сума грошей на рахунку: 14000 гривень
    michael_account.withdrawal(13000)
    # no output
    michael_account.withdrawal(1900)
    # Відмова. На рахунку не вистачає грошей
    print(michael_account.convert2usd(42.7))
    # 23.419203747072597
    