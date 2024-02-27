# solution
def print_even_numbers(start, end):
    for num in range(start, end + 1):
        if num % 2 == 0:
            print(num)

# test
if __name__ == "__main__":
    print_even_numbers(23, 223)
