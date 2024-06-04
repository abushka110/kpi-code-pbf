class Car:
    def __init__(self, name, speed):
        self.name = name
        self.speed = speed

    def cost(self):
        return self.speed * 100

    def update_model(self):
        self.speed += 10

    def info(self):
        return f"Name: {self.name}, Max Speed: {self.speed}, Cost: {self.cost()}"

class RacingCar(Car):
    def __init__(self, name, speed):
        super().__init__(name, speed)

    def cost(self):
        return self.speed * 250

    def update_model(self):
        self.speed += 15

# Create objects
car = Car("Car", 240)
racing_car = RacingCar("Racing Car", 360)

# Print information
print(car.info())
print(racing_car.info())

# Update models
car.update_model()
racing_car.update_model()

# Print updated information
print(car.info())
print(racing_car.info())