class Fraction:
    def __init__(self, numerator, denominator=1):
        if denominator == 0:
            raise ValueError("Denominator cannot be zero.")
        
        common_divisor = self._gcd(numerator, denominator)
        self.numerator = numerator // common_divisor
        self.denominator = denominator // common_divisor

    def _gcd(self, a, b):
        while b:
            a, b = b, a % b
        return a

    def __str__(self):
        return f"{self.numerator}/{self.denominator}"

    def __add__(self, other):
        new_numerator = self.numerator * other.denominator + other.numerator * self.denominator
        new_denominator = self.denominator * other.denominator
        return Fraction(new_numerator, new_denominator)

    def __sub__(self, other):
        new_numerator = self.numerator * other.denominator - other.numerator * self.denominator
        new_denominator = self.denominator * other.denominator
        return Fraction(new_numerator, new_denominator)

    def __mul__(self, other):
        new_numerator = self.numerator * other.numerator
        new_denominator = self.denominator * other.denominator
        return Fraction(new_numerator, new_denominator)

    def __eq__(self, other):
        return (self.numerator == other.numerator) and (self.denominator == other.denominator)

    def __lt__(self, other):
        return self.numerator * other.denominator < other.numerator * self.denominator

    def __le__(self, other):
        return self.numerator * other.denominator <= other.numerator * self.denominator

    def __gt__(self, other):
        return self.numerator * other.denominator > other.numerator * self.denominator

    def __ge__(self, other):
        return self.numerator * other.denominator >= other.numerator * self.denominator


# test
fraction1 = Fraction(1, 2)
fraction2 = Fraction(3, 4)

sum_result = fraction1 + fraction2
print(f"Сума: {sum_result}")

sub_result = fraction1 - fraction2
print(f"Різниця: {sub_result}")

mul_result = fraction1 * fraction2
print(f"Добуток: {mul_result}")

# Порівняння
if fraction1 == fraction2:
    print("Дроби рівні")
elif fraction1 < fraction2:
    print("Перший дріб менший за другий")
else:
    print("Перший дріб більший за другий")
