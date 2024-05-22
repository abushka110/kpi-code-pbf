# solution
# 21
# модуль random для генерації випадкових чисел
import random

# клас EVehicle (електротранспорт)
class EVehicle:
    def __init__(self, capacity):
        self.capacity = capacity  # Ємність батареї
        self.max_distance = random.randint(20, 100)  # Максимальна дистанція, яку можна проїхати

    # Метод для виводу параметрів транспортного засобу
    def params(self) -> str:
        return f"Ємність: {self.capacity} Ah, Максимальна дситанція: {self.max_distance} km"

    # Метод для розрахунку втрат енергії
    def calculate_loss(self):
        return self.capacity / self.max_distance

    # Метод для розрахунку втрат заряду при проїзді заданої дистанції
    def charge_loss(self, distance):
        return (distance / self.max_distance) * 100


# клас EBike (електровелосипед), який успадковує EVehicle
class EBike(EVehicle):
    def __init__(self, capacity, brand):
        super().__init__(capacity)  # ініціалізатор батьківського класу
        self.brand = brand
        self.freeway = random.random()  

    # Метод для виводу параметрів велосипеду
    def params(self):
        return super().params() + f" Виробник: {self.brand}"

    # Метод для розрахунку втрат заряду при проїзді заданої дистанції
    def charge_loss(self, distance):
        return super().charge_loss(distance) * (1 - self.freeway)


# клас EScooter (електросамокат), який успадковує EVehicle
class EScooter(EVehicle):
    def __init__(self, capacity, brand):
        super().__init__(capacity)
        self.brand = brand
        self.freeway = random.random()

    # Метод для виводу параметрів самокату
    def params(self):
        return super().params() + f" Виробник: {self.brand}"

    # Метод для розрахунку втрат заряду при проїзді заданої дистанції
    def charge_loss(self, distance):
        return super().charge_loss(distance) * (1 - self.freeway)

def ride(vehicle):
    vehicle_type = ""
    if isinstance(vehicle, EBike):
        vehicle_type = "електро велосипеді"
    elif isinstance(vehicle, EScooter):
        vehicle_type = "Електричному скутері"
    else:
        print("транспортному засобі")
    return f"Розпочинаю поїздку на {vehicle_type}"

# test
if __name__ == "__main__":
    # test 1
    electro_car = EVehicle(5000)
    print(f"Максимальна дистанція електрокару: {electro_car.max_distance}")
    print(electro_car.calculate_loss())
    print(electro_car.charge_loss(57))
    print()

    # test 2
    bike = EBike(10, "ProBike")
    print(f"Максимальна дистанція велосипеду: {bike.max_distance}")
    print(bike.params())
    print(bike.charge_loss(10))
    print()

    # test 3
    scooter = EScooter(15, "ScootS")
    print(f"Максимальна дистанція скутеру: {scooter.max_distance}")
    print(scooter.params())
    print(scooter.charge_loss(10))
    print()

    # test 4
    print(ride(bike))
    print(ride(scooter))