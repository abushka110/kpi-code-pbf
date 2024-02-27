# solution
def f_function(x: int):
    result_half_1 = 0
    result_half_2 = 0
    for k in range(1, 21):
        one_half_1 = pow(x, 2 * k + 1) / (2 * k + 1)
        one_half_2 = pow(x, 2 * k) / (2 * k)
        result_half_1 += one_half_1 / one_half_2

        result_half_2 += pow(x, 2 * k) / (2 * k)
    return result_half_1 / result_half_2
        
def y_function(x: int):
    half_1 = 2 * f_function(0.5) - 3 * f_function(x - 0.1)
    half_2 = 5 - f_function(4 * x - 1)
    return half_1 / half_2

def ask_number():
    num = int(input("Введіть число: "))
    result = y_function(num)
    print(f"Результат розрахунку функції Y з параметром {num} = {result}")

# test
if __name__ == "__main__":
    ask_number()