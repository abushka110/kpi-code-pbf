# solution
# function that ask for matrix
def input_matrix():
    N = int(input("Enter the number of rows: "))
    M = int(input("Enter the number of columns: "))
    matrix = []
    for i in range(N):
        row = []
        for j in range(M):
            row.append(int(input(f"Enter element at ({i}, {j}): ")))
        matrix.append(row)
    return matrix

# function to calculate max of average from each row
def max_average_row(matrix):
    max_average = float('-inf')
    for row in matrix:
        row_average = sum(row) / len(row)
        if row_average > max_average:
            max_average = row_average
    return max_average

# test
if __name__ == "__main__":
    matrix = input_matrix()
    print(max_average_row(matrix))