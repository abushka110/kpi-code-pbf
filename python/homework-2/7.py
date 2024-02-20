# solution
# function that ask for matrix and calculates matrix elements sum
def input_matrix_and_sum():
    N = int(input("Enter the number of rows: "))
    M = int(input("Enter the number of columns: "))
    matrix = []
    total_sum = 0
    for i in range(N):
        row = []
        for j in range(M):
            element = int(input(f"Enter element at ({i}, {j}): "))
            row.append(element)
            total_sum += element
        matrix.append(row)
    return matrix, total_sum

def sum_row_fractions(matrix, total_sum):
    for row in matrix:
        row_sum = sum(row)
        row_fraction = row_sum / total_sum
        row.append(row_fraction)
    return matrix

# test
if __name__ == "__main__":
    matrix, total_sum = input_matrix_and_sum()
    matrix = sum_row_fractions(matrix, total_sum)
    for row in matrix:
        print(row)