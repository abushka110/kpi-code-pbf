# 21
import random

class EVehicle:
    def __init__(self, capacity):
        self.capacity = capacity
        self.max_distance = random.randint(20, 100)

    def params(self):
        print(f"Capacity: {self.capacity} Ah, Max distance: {self.max_distance} km")

    def calculate_loss(self):
        return self.capacity / self.max_distance

    def charge_loss(self, distance):
        return (distance / self.max_distance) * 100


class EBike(EVehicle):
    def __init__(self, capacity, brand, freeway):
        super().__init__(capacity)
        self.brand = brand
        self.freeway = freeway

    def params(self):
        super().params()
        print(f"Brand: {self.brand}")

    def charge_loss(self, distance):
        return super().charge_loss(distance) * (1 - self.freeway)


class EScooter(EVehicle):
    def __init__(self, capacity, brand, freeway):
        super().__init__(capacity)
        self.brand = brand
        self.freeway = freeway

    def params(self):
        super().params()
        print(f"Brand: {self.brand}")

    def charge_loss(self, distance):
        return super().charge_loss(distance) * (1 - self.freeway)


def ride(vehicle):
    if isinstance(vehicle, EBike):
        print("Starting a ride on an e-bike")
    elif isinstance(vehicle, EScooter):
        print("Starting a ride on an e-scooter")
    else:
        print("Unknown vehicle type")

# Create instances and test
bike = EBike(10, "Brand1", 0.5)
scooter = EScooter(15, "Brand2", 0.3)

bike.params()
scooter.params()

print(bike.charge_loss(10))
print(scooter.charge_loss(10))

ride(bike)
ride(scooter)