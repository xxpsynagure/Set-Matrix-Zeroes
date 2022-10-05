# Time Complexity O(m*n)
# Space Complexity O(m+n)

import numpy as np

m = int(input("Enter m: "))
n = int(input("Enter n: "))

print("Enter the elements of the matrix in single line: ")
input_matrix = list(map(int, input().strip().split()))

input_matrix = np.matrix(input_matrix).reshape(m, n)
print("Original matrix: \n",input_matrix)

def setZero(input_matrix):
    idx = list(np.where(input_matrix == 0))

    output_matrix = input_matrix.copy()

    if len(idx[0]) != 2:
        output_matrix[idx[0], :] = np.zeros((1,n), dtype = int)
        output_matrix[: , idx[1]] = np.zeros((m, 1), dtype = int)
    else:
        for i in idx:
            output_matrix[i[0], :] = np.zeros((1,n), dtype = int)
            output_matrix[: , i[1]] = np.zeros((m, 1), dtype = int)

    return output_matrix

print()
print("Output Matrix : \n",setZero(input_matrix))