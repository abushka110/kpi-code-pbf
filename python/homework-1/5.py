# Зчитування введених користувачем значення ваги в гармах
grams = int(input("ВВедіть вагу в грамах: "))

# переведення грамів в кг та тони
kg = grams / 1000
tons = kg / 1000

# виведення результатів
print(f"Вага в тонах - {tons:.10f}")
print(f"Вага в кілограмах - {kg}")