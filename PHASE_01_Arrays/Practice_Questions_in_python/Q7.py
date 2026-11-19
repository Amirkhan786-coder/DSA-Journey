#Q7. Separate Even and Odd Elements from an Array

arr = [10, 15, 20, 25, 30, 35, 40]

even = []
odd = []

for i in arr:
    if i % 2 == 0:
        even.append(i)
    else:
        odd.append(i)

print("Even Numbers:", even)
print("Odd Numbers:", odd)