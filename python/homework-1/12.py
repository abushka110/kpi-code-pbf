import math

def check_volume_fit_in_containers(A, R, H, M):
    # Об'єми куба та циліндра
    volume_cube = A**3
    volume_cylinder = math.pi * R**2 * H
    
    # Перевірка, чи рідина поміщається в кожну з ємностей
    fits_in_cube = M <= volume_cube
    fits_in_cylinder = M <= volume_cylinder
    
    # Виведення результатів
    if fits_in_cube and fits_in_cylinder:
        print("Рідина поміщається і в куб, і в циліндр.")
    elif fits_in_cube:
        print("Рідина поміщається тільки в куб.")
    elif fits_in_cylinder:
        print("Рідина поміщається тільки в циліндр.")
    else:
        print("Рідина не поміщається ні в одну з ємностей.")

# Введення розмірів та об'єму рідини
A = float(input("Введіть ребро куба (A): "))
R = float(input("Введіть радіус циліндра (R): "))
H = float(input("Введіть висоту циліндра (H): "))
M = float(input("Введіть об'єм рідини (M): "))

# Перевірка, чи рідина поміщається в ємності
check_volume_fit_in_containers(A, R, H, M)
