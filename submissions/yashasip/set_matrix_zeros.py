# Time Complexity: O(m*n)
# Space Complexity: O(m+n)

# input
m = int(input())
n = int(input())

input_matrix = []

for _ in range(m):
    input_matrix.append(list(map(int, input().rstrip().split())))


def set_matrix_zeros(matrix):
    rows_set = set() # set of row numbers containing zeros
    cols_set = set() # set of column numbers containing zeros
    
    for i, row in enumerate(matrix):
        for j, elem in enumerate(row):
            if elem == 0:
                cols_set.add(j)
                rows_set.add(i)
                
    # change the row values to zeros
    for row in rows_set:
        for i in range(n):
            matrix[row][i] = 0

    # change the column values to zeros
    for col in cols_set:
        for j in range(m):
            matrix[j][col] = 0

    return matrix


# display result
print(set_matrix_zeros(input_matrix))

