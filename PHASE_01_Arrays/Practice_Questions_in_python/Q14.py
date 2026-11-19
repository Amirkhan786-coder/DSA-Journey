#Q14. Search an Element in an Array (Linear Search)

arr = [10, 20, 30, 40, 50]

target = 30

found = False

for i in range(len(arr)):
    if arr[i] == target:
        print("Element Found at Index:", i)
        found = True
        break

if not found:
    print("Element Not Found")