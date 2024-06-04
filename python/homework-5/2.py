class Inheritance:
    def __init__(self, denomination, num_coins):
        self.denomination = denomination
        self.num_coins = num_coins

    def calculate_sum(self):
        return self.denomination * self.num_coins

    def calculate_value_in_uah(self, exchange_rate):
        return self.calculate_sum() * exchange_rate

    def __str__(self):
        return f"Denomination: {self.denomination}, Number of coins: {self.num_coins}"

class InheritanceInEuro(Inheritance):
    def __init__(self, denomination, num_coins, exchange_rate_euro):
        super().__init__(denomination, num_coins)
        self.exchange_rate_euro = exchange_rate_euro

    def calculate_value_in_euro(self):
        return self.calculate_sum() * self.exchange_rate_euro

    def __str__(self):
        return super().__str__() + f", Exchange rate in Euro: {self.exchange_rate_euro}"
    

if __name__ == "__main__":
    inheritance = Inheritance(10, 50)
    print(inheritance)
    print("Sum in coins: ", inheritance.calculate_sum())
    print("Value in UAH: ", inheritance.calculate_value_in_uah(27.5))

    inheritance_in_euro = InheritanceInEuro(10, 50, 0.033)
    print(inheritance_in_euro)
    print("Sum in coins: ", inheritance_in_euro.calculate_sum())
    print("Value in Euro: ", inheritance_in_euro.calculate_value_in_euro())