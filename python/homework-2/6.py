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

# function to calculate averages 
def calculate_averages(matrix):
    row_averages = [sum(row) / len(row) for row in matrix]
    column_averages = [sum(column) / len(column) for column in zip(*matrix)]
    matrix.append(column_averages)
    for i, row_average in enumerate(row_averages):
        matrix[i].append(row_average)
    return matrix

# test
if __name__ == "__main__":
    matrix = input_matrix()
    print(calculate_averages(matrix))