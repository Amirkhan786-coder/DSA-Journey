# Q3. Find Minimum and Maximum of an Array

arr = [45, 12, 78, 23, 90, 34]

minimum = arr[0]
maximum = arr[0]

for i in arr:
    if i < minimum:
        minimum = i

    if i > maximum:
        maximum = i

print("Minimum =", minimum)
print("Maximum =", maximum)