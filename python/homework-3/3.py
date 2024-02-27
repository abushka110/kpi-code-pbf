# solution
# функція виводить True якщо число входить в діапазон,
# та False, якщо не входить
def in_range(n, start, end):
    return start <= n <= end

# test
if __name__ == "__main__":
    n_input = int(input("Введіть число для перевірки: "))
    start_input = int(input("Введіть початок діапазону: "))
    end_input = int(input("Введіть кінець діапазону: "))
    print(in_range(n_input, start_input, end_input))