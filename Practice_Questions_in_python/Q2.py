#Q2. Find Sum and Average of All Elements of an Array

arr = [10, 20, 30, 40, 50]

total = 0

for i in arr:
    total += i

average = total / len(arr)

print("Sum =", total)
print("Average =", average)