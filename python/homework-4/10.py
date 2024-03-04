class Room:
    def __init__(self, length, width, height):
        self.length = length
        self.width = width
        self.height = height

    def calculate_wall_area(self):
        # Площа стін = 2 * (довжина * висота + ширина * висота)
        return 2 * (self.length * self.height + self.width * self.height)

    def calculate_wall_area_without_window_door(self):
        # Розмір вікна: 2 м * 1.5 м
        window_area = 2 * 1.5
        # Розмір дверей: 2 м * 0.8 м
        door_area = 2 * 0.8

        # Площа стін без вікна і дверей = Площа стін - Площа вікна - Площа дверей
        total_wall_area = self.calculate_wall_area()
        return total_wall_area - window_area - door_area

    def __str__(self):
        return f"Room(length={self.length} m, width={self.width} m, height={self.height} m)"

    def __del__(self):
        print(f"Object {self} is being destroyed.")

# Введення значень з клавіатури
length = float(input("Enter length of the room (m): "))
width = float(input("Enter width of the room (m): "))
height = float(input("Enter height of the room (m): "))

# Створення об'єкту класу Room
room_obj = Room(length, width, height)

# Виклик методів класу
wall_area = room_obj.calculate_wall_area()
wall_area_without_window_door = room_obj.calculate_wall_area_without_window_door()

# Виведення результатів
print(f"Wall area: {wall_area} square meters")
print(f"Wall area without window and door: {wall_area_without_window_door} square meters")

# Виведення рядка інформації про об'єкт
print(room_obj)

# Звільнення пам'яті (виклик деструктора)
del room_obj
