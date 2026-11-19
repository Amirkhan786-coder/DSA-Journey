#Q13. Lower Triangular Matrix

matrix = [
    [1, 0, 0],
    [4, 5, 0],
    [7, 8, 9]
]

print("Lower Triangular Matrix:")

for i in range(len(matrix)):
    for j in range(len(matrix)):
        if i >= j:
            print(matrix[i][j], end=" ")
        else:
            print(0, end=" ")

    print()