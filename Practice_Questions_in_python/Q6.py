#Q6. Delete a Number from an Array at a Given Position

arr = [10, 20, 30, 40, 50]

position = 2

if 0 <= position < len(arr):
    deleted = arr.pop(position)
    print("Deleted Element:", deleted)
    print("Array after deletion:", arr)
else:
    print("Invalid Position")