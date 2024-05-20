# solution
class Drink:
    def __init__(self, title, density):
        self.title = title  # Назва напою
        self.density = density  # Густина напою

    def get_cost(self):
        # Розрахунок вартості одного літру напою
        return self.density / 0.15
    
    def cost(self):
        # Вивід вартості одного літру напою
        cost_per_liter = self.get_cost()
        return f"Напій '{self.title}' коштує {cost_per_liter:.2f} грн за 1 л"
    
    def info(self):
        # Вивід інформації про напій
        return f"Напій '{self.title}'. Густина: {self.density} кг/м³"
    

class Alcohol(Drink):
    def __init__(self, title, density, strength):
        super().__init__(title, density)
        self.strength = strength  # Міцність алкогольного напою

    def get_cost(self):
        # Розрахунок вартості одного літру алкогольного напою
        return super().get_cost() * (1 + self.strength / 100)
    

class Juice(Drink):
    def __init__(self, title, density, taste):
        super().__init__(title, density)
        self.taste = taste  # Смак соку

    def info(self):
        # Вивід інформації про сік
        return super().info() + f", Смак соку: {self.taste}"
    

def order_drink(drink, volume=1):
    # Розрахунок вартості замовленого об'єму напою
    drink_cost = drink.get_cost() * volume

    # Визначення типу напою
    if isinstance(drink, Alcohol):
        drink_type = "алкогольного напою"
    elif isinstance(drink, Juice):
        drink_type = "сік"
    else:
        drink_type = "напою"

    # Вивід інформації про вартість замовлення
    return f"{volume:.2f} літрів {drink_type} буде коштувати Вам {drink_cost:.2f} грн"

# test
if __name__ == "__main__":
    print("Вода:")
    water = Drink("Вода", 1.9)
    print(water.info())
    print()
    
    print("Сидр:")
    cider = Alcohol("Сидр", 1.03, 8)
    print(cider.info())
    print(cider.cost())
    print()

    print("Апельсиновий сік:")
    orange_juice = Juice("Апельсиновий сік", 1.004, "Апельсин")
    print(orange_juice.info())
    print(orange_juice.cost())
    print()

    print(order_drink(cider, 0.5))
    print(order_drink(orange_juice, 1))