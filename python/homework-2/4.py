# solution
# zeros doesn't count
def positive_negative(numbers: list):
    positive_numbers = []
    negative_numbers = []
    for item in numbers:
        if item < 0:
            negative_numbers.append(item)
        elif item > 0:
            positive_numbers.append(item)
    print(f"positive: {positive_numbers}")
    print(f"negative: {negative_numbers}")

# test
if __name__ == "__main__":
    A = [-9034, -2, 23, -91, 28, -78, 291]
    positive_negative(A)
    # output
    # positive: [23, 28, 291]
    # negative: [-9034, -2, -91, -78]