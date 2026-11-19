#Q10. Subtraction of Two Matrices

A = [
    [10, 20],
    [30, 40]
]

B = [
    [1, 2],
    [3, 4]
]

result = []

for i in range(2):
    row = []

    for j in range(2):
        row.append(A[i][j] - B[i][j])

    result.append(row)

print("Subtraction of Matrices:")

for row in result:
    print(row)