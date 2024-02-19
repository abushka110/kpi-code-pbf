# функція повертає інший масив
# solution
def remove_not_zero(numbers: list):
    zeros = []
    for num in numbers:
        if num == 0:
            zeros.append(num)
    return zeros

# test
if __name__ == "__main__":
    A = [1, 54, 0, 232312, 0]
    print(remove_not_zero(A)) # [0, 0]