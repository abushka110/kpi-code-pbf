# Введення дійсних чисел A, B, C
A = float(input("Введіть число A: "))
B = float(input("Введіть число B: "))
C = float(input("Введіть число C: "))

# Перевірка умов
if A < B < C:
    print("Виконується нерівність A < B < C.")
elif A > B > C:
    print("Виконується нерівність A > B > C.")
else:
    print("Ні одна з нерівностей A < B < C або A > B > C не виконується.")
