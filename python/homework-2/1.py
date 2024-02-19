# solution
def move_right(elements: list):
    last_item = elements[-1]
    for index in range(len(elements)-1, 0, -1):
        elements[index] = elements[index-1]
    elements[0] = last_item
    print(elements)

# test
A = [1, 2, 3, 4, 5, 6]
move_right(A)
# [6, 1, 2, 3, 4, 5]

A = ["aba", "ada", "dgd", "oel"]
move_right(A)
# ["oel", "aba", "ada", "dgd"]