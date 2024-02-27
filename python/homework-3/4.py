# solution
def count_letters(sentence):
    lower_count = 0
    upper_count = 0
    for char in sentence:
        if char.islower():
            lower_count += 1
        elif char.isupper():
            upper_count += 1
    return lower_count, upper_count

# test
if __name__ == "__main__":
    print(count_letters(input("Введіть речення: ")))