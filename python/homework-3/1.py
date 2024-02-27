# solution
# функція приймає list як аргумент
def multiply(numbers: list):
    result = 1
    for num in numbers:
        result *= num
    return result

# test
# функція запитує число, поки не буде введено 0
def ask_number():
    numbers = []
    number = int(input("Введіть довільне число(Зупинити введення - 0): "))
    while number != 0:
        numbers.append(number)
        number = int(input("Введіть довільне число(Зупинити введення - 0): "))
    return numbers

if __name__ == "__main__":
    numbers = ask_number()
    print(multiply(numbers))