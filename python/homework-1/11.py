# Введення номеру місця
seat_number = int(input("Введіть номер місця в плацкартному вагоні: "))

# Припустимо, що вагон розташований у формі 18 рядів
# де парні місця - верхні, а непарні - нижні
rows_in_wagon = 18

# Визначення типу місця
seat_type = ""
place_type = ""

if seat_number % 2 == 0:
    seat_type = "верхнє"
else:
    seat_type = "нижнє"

if seat_number < 37:
    place_type = "купе"
else:
    place_type = "бокове"

print(f"Місце {seat_number} - {seat_type}, {place_type}.")
