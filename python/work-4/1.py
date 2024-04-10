import random  # Імпортуємо модуля random для генерації випадкових чисел

class BankAccount:  # Визначення класу BankAccount
    def __init__(self, name, surname, money, rate):  # Визначення методу ініціалізації
        self.name = name  # Ініціалізація атрибуту name
        self.surname = surname  # Ініціалізація атрибуту surname
        self.account_id = random.randint(1000000000, 9999999999)  # Генерація випадкового 10-значного account_id
        self.money = money  # Ініціалізація атрибуту money
        self.rate = rate  # Ініціалізація атрибуту rate

    def info(self):  # метод для виведення інформації про рахунок
        print(f"Власник рахунку: {self.surname} {self.name}")  # Виводиться ім'я та прізвище власника рахунку
        print(f"Номер рахунку: {self.account_id}")  # Виводиться номер рахунку
        print(f"Сума грошей на рахунку: {self.money} гривень")  # Виводиться сума грошей на рахунку

    def change_owner(self, new_name, new_surname):  # метод для зміни власника рахунку
        self.name = new_name  # Змінюється атрибут name
        self.surname = new_surname  # Змінюється атрибут surname

    def put(self, amount):  # метод для додавання грошей на рахунок
        self.money += amount  # Додавання вказаної суми до атрибуту money

    def withdrawal(self, amount):  # метод для зняття грошей з рахунку
        if self.money >= amount:  # Перевірка, чи достатньо грошей на рахунку
            self.money -= amount
        else:
            print("Відмова. На рахунку не вистачає грошей")  # Виводиться повідомлення, якщо грошей недостатньо

    def convert2usd(self, exchange_rate):  # метод для конвертації грошей на рахунку в долари
        return self.money / exchange_rate  #Повертається суму грошей в доларах