#Q12. Upper Triangular Matrix

matrix = [
    [1, 2, 3],
    [0, 5, 6],
    [0, 0, 9]
]

print("Upper Triangular Matrix:")

for i in range(len(matrix)):
    for j in range(len(matrix)):
        if i <= j:
            print(matrix[i][j], end=" ")
        else:
            print(0, end=" ")

    print()