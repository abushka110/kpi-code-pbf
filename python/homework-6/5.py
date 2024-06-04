import random

names = ["Олександр", "Андрій", "Анастасія", "Ірина", "Наталя", "Павло", "Роман", "Світлана", "Сергій", "Тетяна"]

class Person:
    def __init__(self, name, age):
        self.__name = name
        self.__age = age

    def greet(self, other):
        pass

    def introduce(self):
        return f"Мене звуть {self.__name}, мені {self.__age} років, я {self.__class__.__name__}"

class Bureaucrat(Person):
    def greet(self, other):
        return f"Доброго дня, {other._Person__name}"

class Informal(Person):
    def greet(self, other):
        return f"Привіт, {other._Person__name}!"

class Ordinary(Person):
    def greet(self, other):
        if other._Person__age <= self._Person__age < other._Person__age + 5:
            return f"Привіт, {other._Person__name}!"
        else:
            return f"Доброго дня, {other._Person__name}"

people = [Bureaucrat(random.choice(names), random.randint(20, 40)) for _ in range(2)]
people += [Informal(random.choice(names), random.randint(20, 40)) for _ in range(2)]
people.append(Ordinary(random.choice(names), random.randint(20, 40)))

for person in people:
    print(person.introduce())

for i in range(len(people)):
    for j in range(i+1, len(people)):
        print(f"{people[i]._Person__name}: {people[i].greet(people[j])}")
        print(f"{people[j]._Person__name}: {people[j].greet(people[i])}")