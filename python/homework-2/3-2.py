# функція змінює масив, не повертаючи нічого
# solution
def remove_not_zero(numbers: list):
    not_zeros = []
    for num in numbers:
        if num != 0:
            not_zeros.append(num)
    for item in not_zeros:
        numbers.remove(item)


A = [1, 54, 0, 232312, 0]
remove_not_zero(A)
print(A) # [0, 0]