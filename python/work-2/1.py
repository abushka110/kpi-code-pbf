x = int(input("Введіть значення x: "))

if x >= -4 and x != -1:
    print((x**2 - 1) / (pow(x, 3) + 1))
elif x < -8 and x != -1:
    print((x + 3) * (x - 2))
else:
    print(f"Значення x({x}) не входить в область допустимих значень")
