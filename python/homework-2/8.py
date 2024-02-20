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

def multiply_by_k_column(matrix, K):
    for row_no in range(len(matrix)):
        for column_no in range(len(matrix[0])):
            matrix[row_no][column_no] = matrix[row_no][column_no] * K
    return matrix

# test
if __name__ == "__main__":
    matrix = input_matrix()
    print(multiply_by_k_column(matrix, int(input("K: "))))