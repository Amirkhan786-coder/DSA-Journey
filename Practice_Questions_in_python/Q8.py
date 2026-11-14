#Q8. Create and Traverse a Matrix of Order N × M

n = 2
m = 3

matrix = []

# Create Matrix
for i in range(n):
    row = []

    for j in range(m):
        value = int(input(f"Enter element [{i}][{j}]: "))
        row.append(value)

    matrix.append(row)

# Traverse Matrix
print("Matrix:")

for i in range(n):
    for j in range(m):
        print(matrix[i][j], end=" ")

    print()