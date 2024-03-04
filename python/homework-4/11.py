class Room:
    def __init__(self, length, width, height):
        self.length = length
        self.width = width
        self.height = height

    def calculate_wall_area(self):
        # Метод для визначення площі стін
        return 2 * (self.length * self.height + self.width * self.height)

    def calculate_wall_area_with_window_and_door(self):
        # Метод для визначення площі стін без одного вікна та одних дверей
        window_area = 2 * 1.5  # Розмір вікна 2 × 1.5 м
        door_area = 2 * 0.8  # Розмір дверей 2 × 0.8 м
        total_area = self.calculate_wall_area()
        return total_area - window_area - door_area

    def calculate_wallpaper_rolls(self):
        # Метод для визначення кількості рулонів шпалер
        wallpaper_roll_size = 5  # Стандартний розмір рулона шпалер
        wall_area = self.calculate_wall_area_with_window_and_door()
        rolls_needed = wall_area / wallpaper_roll_size
        return rolls_needed

    def __str__(self):
        return f"Room(length={self.length}, width={self.width}, height={self.height}m)"

    def __del__(self):
        print(f"Object {self} is being destroyed.")

# Введення розмірів кімнати з клавіатури
length = float(input("Enter length of the room (in meters): "))
width = float(input("Enter width of the room (in meters): "))
height = float(input("Enter height of the room (in meters): "))

# Створення об'єкту класу Room
room_obj = Room(length, width, height)

# Виклик методів класу
wall_area = room_obj.calculate_wall_area()
wall_area_without_window_door = room_obj.calculate_wall_area_with_window_and_door()
wallpaper_rolls_needed = room_obj.calculate_wallpaper_rolls()

# Виведення результатів
print(f"Total wall area: {wall_area} square meters")
print(f"Wall area without window and door: {wall_area_without_window_door} square meters")
print(f"Number of wallpaper rolls needed: {wallpaper_rolls_needed} rolls")

# Виведення рядка інформації про об'єкт
print(room_obj)

# Звільнення пам'яті (виклик деструктора)
del room_obj
