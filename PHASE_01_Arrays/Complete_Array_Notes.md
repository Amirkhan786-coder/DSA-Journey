# PHASE 01 — ARRAYS
## Complete DSA Notes | Python | Beginner to Advanced

**Learning Level:** Beginner → Intermediate → Advanced  
**Language:** Python  
**Goal:** Master Arrays for LeetCode, GeeksforGeeks and technical interviews.

---

# CONTENTS

1. Array Fundamentals
2. Array Memory and Indexing
3. Array Operations
4. Array Traversal
5. Searching Algorithms
6. Maximum and Minimum
7. Sum, Average and Frequency
8. Prefix Sum
9. Kadane's Algorithm
10. Two Pointer Technique
11. Sliding Window Introduction
12. Subarray and Subsequence
13. Time and Space Complexity
14. 20 Coding Questions with Solutions
15. 25 Interview Questions with Answers
---

# PART 01 — ARRAY FUNDAMENTALS

## 1. What is an Array?

**Definition:**

An array is a linear data structure that stores multiple elements in a sequential order, where each element can be accessed using an index.

**Hinglish Explanation:**

Array ek data structure hai jisme hum multiple values ko ek hi variable mein store kar sakte hain.

Example: Suppose hume 5 students ke marks store karne hain.

Without Array:

```python
mark1 = 85
mark2 = 90
mark3 = 78
mark4 = 95
mark5 = 88

print(mark1)
print(mark2)
print(mark3)
```

With Python List:

```python
marks = [85, 90, 78, 95, 88]

print(marks)
```

Output:

```text
[85, 90, 78, 95, 88]
```

Ab hum saare marks ek hi variable mein store kar sakte hain.

## 2. Array Indexing

Every element in an array has a position called an index.

Python uses zero-based indexing.

Example:

```python
arr = [10, 20, 30, 40, 50]

print(arr[0])
print(arr[1])
print(arr[2])
print(arr[3])
print(arr[4])
```

Output:

```text
10
20
30
40
50
```

Array Representation:

| Index | Element |
|---:|---:|
| 0 | 10 |
| 1 | 20 |
| 2 | 30 |
| 3 | 40 |
| 4 | 50 |

**Important:**

- First index = 0
- Last index = n - 1
- Total elements = n

Formula:

$$
Last\ Index = n-1
$$

Example:

If an array contains 5 elements:

$$
Last\ Index = 5-1=4
$$

## 3. Characteristics of Arrays

1. **Indexed:** Every element has an index.
2. **Ordered:** Elements maintain their order.
3. **Mutable:** Python list elements can be modified.
4. **Sequential:** Elements can be traversed one by one.
5. **Fast Access:** Accessing an element using an index takes O(1).
6. **Dynamic in Python:** Python lists can grow or shrink.

## 4. Array vs Python List

Python's built-in list is implemented as a dynamic array.

| Feature | Traditional Array | Python List |
|---|---|---|
| Size | Usually fixed | Dynamic |
| Data types | Usually same type | Can contain different types |
| Indexing | O(1) | O(1) |
| Modification | Supported | Supported |
| Appending | Implementation-dependent | Amortized O(1) |

Example:

```python
arr = [10, 20, 30]

arr.append(40)

print(arr)
```

Output:

```text
[10, 20, 30, 40]
```

## 5. Array Memory Representation

In a traditional contiguous array, elements are stored in consecutive memory locations.

Memory Address Formula:

$$
Address(i)=BaseAddress+(i\times ElementSize)
$$

Where:

- BaseAddress = Starting memory address.
- i = Index of the element.
- ElementSize = Memory occupied by one element.

Example:

Assume:

- Base address = 1000
- Element size = 4 bytes
- Required index = 3

$$
Address(3)=1000+(3\times4)
$$

$$
Address(3)=1012
$$

This direct address calculation explains why indexed access is O(1).

**Note:** Python lists internally store references to objects rather than storing all values as a traditional fixed-size integer array.

---

# PART 02 — ARRAY OPERATIONS

## 1. Access an Element

Access means retrieving an element using its index.

```python
arr = [10, 20, 30, 40, 50]

element = arr[2]

print(element)
```

Output:

```text
30
```

Time Complexity:

$$
O(1)
$$

## 2. Update an Element

```python
arr = [10, 20, 30, 40]

arr[2] = 100

print(arr)
```

Output:

```text
[10, 20, 100, 40]
```

Time Complexity:

$$
O(1)
$$

## 3. Insert an Element

```python
arr = [10, 20, 30, 40]

arr.insert(1, 15)

print(arr)
```

Output:

```text
[10, 15, 20, 30, 40]
```

Time Complexity:

$$
O(n)
$$

Reason: Elements after the insertion position may need to shift.

## 4. Delete an Element

```python
arr = [10, 20, 30, 40]

arr.pop(1)

print(arr)
```

Output:

```text
[10, 30, 40]
```

Time Complexity:

$$
O(n)
$$

## 5. Append an Element

```python
arr = [10, 20, 30]

arr.append(40)

print(arr)
```

Output:

```text
[10, 20, 30, 40]
```

Amortized Time Complexity:

$$
O(1)
$$

---

# PART 03 — ARRAY TRAVERSAL

## 1. What is Traversal?

**Definition:**

Array traversal is the process of visiting every element of an array to perform an operation.

Hinglish: Array ke har element ko ek-ek karke access karna traversal kehlata hai.

## 2. Forward Traversal

```python
arr = [10, 20, 30, 40, 50]

for i in range(len(arr)):

    print(arr[i])
```

Output:

```text
10
20
30
40
50
```

Line-by-line explanation:

- `len(arr)` calculates the total number of elements.
- `range(len(arr))` generates indices from 0 to n-1.
- `arr[i]` accesses the current element.
- `print()` displays the element.

## 3. Direct Traversal

```python
arr = [10, 20, 30, 40, 50]

for element in arr:

    print(element)
```

Here, we directly access each element without using an index.

## 4. Reverse Traversal

```python
arr = [10, 20, 30, 40, 50]

for i in range(len(arr) - 1, -1, -1):

    print(arr[i])
```

Output:

```text
50
40
30
20
10
```

Understanding range:

```python
range(start, stop, step)
```

Here:

- Start = n-1
- Stop = -1 (excluded)
- Step = -1

## 5. Traversal Using While Loop

```python
arr = [10, 20, 30, 40, 50]

i = 0

while i < len(arr):

    print(arr[i])

    i += 1
```

## 6. Print Even Numbers

```python
arr = [10, 15, 20, 25, 30, 35]

for num in arr:

    if num % 2 == 0:

        print(num)
```

Output:

```text
10
20
30
```

Explanation:

A number is even when its remainder after division by 2 is zero.

$$
num\%2=0
$$

## 7. Count Positive Numbers

```python
arr = [-5, 10, -2, 20, 0, 15]

count = 0

for num in arr:

    if num > 0:

        count += 1

print(count)
```

Output:

```text
3
```

Time Complexity:

$$
O(n)
$$

Auxiliary Space:

$$
O(1)
$$

---

# PART 04 — SEARCHING ALGORITHMS

Searching means finding a particular element in an array.

Two important searching algorithms:

1. Linear Search
2. Binary Search

## 1. Linear Search

**Definition:**

Linear Search checks every element sequentially until the target is found or the array ends.

Example:

```python
arr = [10, 20, 30, 40, 50]

target = 30

for i in range(len(arr)):

    if arr[i] == target:

        print("Found at index:", i)

        break

else:

    print("Not Found")
```

Output:

```text
Found at index: 2
```

### Dry Run

| Iteration | Element | Comparison | Result |
|---|---:|---|---|
| 1 | 10 | 10 == 30 | False |
| 2 | 20 | 20 == 30 | False |
| 3 | 30 | 30 == 30 | True |

Target found at index 2.

### Linear Search Function

```python
def linear_search(arr, target):

    for i in range(len(arr)):

        if arr[i] == target:

            return i

    return -1


arr = [10, 20, 30, 40, 50]

target = 30

result = linear_search(arr, target)

print("Index:", result)
```

Output:

```text
Index: 2
```

Why return -1?

Because -1 indicates that the target does not exist in the array.

### Complexity

Best Case:

$$
O(1)
$$

Average Case:

$$
O(n)
$$

Worst Case:

$$
O(n)
$$

Auxiliary Space:

$$
O(1)
$$

## 2. Binary Search

**Definition:**

Binary Search is an efficient searching algorithm that repeatedly divides a sorted search space into two halves.

**Important condition:** The array must be sorted.

Example:

```python
arr = [10, 20, 30, 40, 50, 60, 70]

target = 50
```

### Working Steps

1. Find the middle element.
2. Compare the middle element with the target.
3. If equal, return the index.
4. If target is smaller, search the left half.
5. If target is greater, search the right half.

### Binary Search Code

```python
def binary_search(arr, target):

    low = 0

    high = len(arr) - 1

    while low <= high:

        mid = low + (high - low) // 2

        if arr[mid] == target:

            return mid

        elif arr[mid] < target:

            low = mid + 1

        else:

            high = mid - 1

    return -1


arr = [10, 20, 30, 40, 50, 60, 70]

target = 50

print(binary_search(arr, target))
```

Output:

```text
4
```

### Important Formula

$$
mid=low+\frac{high-low}{2}
$$

In Python, integer division is used:

```python
mid = low + (high - low) // 2
```

### Complexity

Best Case:

$$
O(1)
$$

Worst Case:

$$
O(\log n)
$$

Auxiliary Space:

$$
O(1)
$$

### Linear Search vs Binary Search

| Feature | Linear Search | Binary Search |
|---|---|---|
| Sorted array required | No | Yes |
| Method | Sequential | Divide and conquer |
| Best Case | O(1) | O(1) |
| Worst Case | O(n) | O(log n) |
| Implementation | Easy | Moderate |

---

# PART 05 — MAXIMUM, MINIMUM, SUM AND FREQUENCY

## 1. Find Maximum Element

```python
def find_max(arr):

    maximum = arr[0]

    for num in arr:

        if num > maximum:

            maximum = num

    return maximum


arr = [10, 50, 20, 90, 30]

print("Maximum:", find_max(arr))
```

Output:

```text
Maximum: 90
```

Explanation:

1. Initially assume the first element is maximum.
2. Compare every element with maximum.
3. If a larger element appears, update maximum.
4. Return the final maximum.

Time:

$$
O(n)
$$

Space:

$$
O(1)
$$

## 2. Find Minimum Element

```python
def find_min(arr):

    minimum = arr[0]

    for num in arr:

        if num < minimum:

            minimum = num

    return minimum


arr = [10, 50, 20, 90, 30]

print("Minimum:", find_min(arr))
```

Output:

```text
Minimum: 10
```

## 3. Find Maximum and Minimum Together

```python
def find_max_min(arr):

    maximum = arr[0]

    minimum = arr[0]

    for num in arr:

        if num > maximum:

            maximum = num

        if num < minimum:

            minimum = num

    return maximum, minimum


arr = [10, 50, 20, 90, 30]

maximum, minimum = find_max_min(arr)

print("Maximum:", maximum)

print("Minimum:", minimum)
```

## 4. Calculate Sum

```python
def array_sum(arr):

    total = 0

    for num in arr:

        total += num

    return total


print(array_sum([10, 20, 30, 40, 50]))
```

Output:

```text
150
```

Formula:

$$
Sum=a_1+a_2+a_3+\cdots+a_n
$$

## 5. Calculate Average

Formula:

$$
Average=\frac{Sum\ of\ elements}{Number\ of\ elements}
$$

Python:

```python
def array_average(arr):

    if len(arr) == 0:

        return None

    total = 0

    for num in arr:

        total += num

    average = total / len(arr)

    return average


print(array_average([10, 20, 30, 40, 50]))
```

Output:

```text
30.0
```

## 6. Frequency Counting

Frequency means how many times an element appears in an array.

Example:

```python
arr = [10, 20, 10, 30, 20, 10]
```

Frequency:

| Element | Frequency |
|---:|---:|
| 10 | 3 |
| 20 | 2 |
| 30 | 1 |

Python Code:

```python
def frequency_count(arr):

    frequency = {}

    for num in arr:

        if num in frequency:

            frequency[num] += 1

        else:

            frequency[num] = 1

    return frequency


arr = [10, 20, 10, 30, 20, 10]

print(frequency_count(arr))
```

Output:

```text
{10: 3, 20: 2, 30: 1}
```

Explanation:

- Dictionary stores elements as keys.
- Values store their frequency.
- If an element already exists, increase its count.
- Otherwise, initialize its count with 1.

Average Time:

$$
O(n)
$$

Auxiliary Space:

$$
O(k)
$$

Where k is the number of distinct elements.

---

# PART 06 — PREFIX SUM

## 1. What is Prefix Sum?

**Definition:**

Prefix Sum is a technique that creates an additional array containing cumulative sums of the original array.

Hinglish: Prefix Sum mein hum starting se lekar current index tak ka total sum store karte hain.

Original Array:

```python
arr = [2, 4, 6, 8, 10]
```

Prefix Sum:

```text
[2, 6, 12, 20, 30]
```

### Formula

For the first element:

$$
prefix[0]=arr[0]
$$

For remaining elements:

$$
prefix[i]=prefix[i-1]+arr[i]
$$

### Python Code

```python
def prefix_sum(arr):

    n = len(arr)

    prefix = [0] * n

    if n == 0:

        return prefix

    prefix[0] = arr[0]

    for i in range(1, n):

        prefix[i] = prefix[i - 1] + arr[i]

    return prefix


arr = [2, 4, 6, 8, 10]

print(prefix_sum(arr))
```

Output:

```text
[2, 6, 12, 20, 30]
```

### Line-by-Line Explanation

1. `len(arr)` calculates array length.
2. `[0] * n` creates a prefix array.
3. `prefix[0] = arr[0]` initializes the first element.
4. Loop starts from index 1.
5. Previous prefix sum is added to current element.
6. Return the final prefix array.

## 2. Range Sum Query

Suppose:

```python
arr = [2, 4, 6, 8, 10]
```

Find sum between index 1 and index 3.

Required:

$$
4+6+8=18
$$

Formula:

$$
Sum(L,R)=prefix[R]-prefix[L-1]
$$

For L = 0:

$$
Sum(0,R)=prefix[R]
$$

### Complete Code

```python
def build_prefix(arr):

    prefix = [0] * len(arr)

    if not arr:

        return prefix

    prefix[0] = arr[0]

    for i in range(1, len(arr)):

        prefix[i] = prefix[i - 1] + arr[i]

    return prefix


def range_sum(prefix, left, right):

    if left == 0:

        return prefix[right]

    return prefix[right] - prefix[left - 1]


arr = [2, 4, 6, 8, 10]

prefix = build_prefix(arr)

print(range_sum(prefix, 1, 3))
```

Output:

```text
18
```

### Complexity

Prefix Construction:

$$
O(n)
$$

Range Query:

$$
O(1)
$$

Extra Space:

$$
O(n)
$$

Applications:

- Range sum queries
- Cumulative frequency
- Subarray sum problems
- Matrix sum problems
- Competitive programming

---

# PART 07 — KADANE'S ALGORITHM

## 1. What is Kadane's Algorithm?

**Definition:**

Kadane's Algorithm is used to find the maximum sum of a contiguous subarray in an array.

Example:

```python
arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
```

Maximum Subarray:

```text
[4, -1, 2, 1]
```

Maximum Sum:

$$
4+(-1)+2+1=6
$$

## 2. Main Logic

Maintain two variables:

1. `current_sum`
2. `max_sum`

At each position, choose between:

- Starting a new subarray.
- Extending the existing subarray.

### Formula

$$
current\_sum=\max(arr[i],current\_sum+arr[i])
$$

$$
max\_sum=\max(max\_sum,current\_sum)
$$

## 3. Complete Python Code

```python
def kadane(arr):

    if not arr:

        return 0

    current_sum = arr[0]

    max_sum = arr[0]

    for i in range(1, len(arr)):

        current_sum = max(
            arr[i],
            current_sum + arr[i]
        )

        max_sum = max(
            max_sum,
            current_sum
        )

    return max_sum


arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]

print("Maximum Subarray Sum:", kadane(arr))
```

Output:

```text
Maximum Subarray Sum: 6
```

## 4. Dry Run

| Element | Current Sum | Maximum Sum |
|---:|---:|---:|
| -2 | -2 | -2 |
| 1 | 1 | 1 |
| -3 | -2 | 1 |
| 4 | 4 | 4 |
| -1 | 3 | 4 |
| 2 | 5 | 5 |
| 1 | 6 | 6 |
| -5 | 1 | 6 |
| 4 | 5 | 6 |

Final Answer:

$$
Maximum\ Subarray\ Sum=6
$$

### Complexity

Time:

$$
O(n)
$$

Auxiliary Space:

$$
O(1)
$$

**Important:** Initializing both variables with `arr[0]` correctly handles an all-negative array.

---

# PART 08 — TWO POINTER TECHNIQUE

## 1. What is Two Pointer?

**Definition:**

Two Pointer is a problem-solving technique that uses two indices to process an array efficiently.

Common types:

1. Opposite Direction
2. Same Direction
3. Fast and Slow Pointers

## 2. Reverse an Array Using Two Pointers

```python
def reverse_array(arr):

    left = 0

    right = len(arr) - 1

    while left < right:

        arr[left], arr[right] = arr[right], arr[left]

        left += 1

        right -= 1

    return arr


arr = [10, 20, 30, 40, 50]

print(reverse_array(arr))
```

Output:

```text
[50, 40, 30, 20, 10]
```

Explanation:

- Left starts at index 0.
- Right starts at the last index.
- Swap both elements.
- Move left forward.
- Move right backward.
- Stop when both pointers meet or cross.

## 3. Pair Sum in Sorted Array

Problem: Find two elements whose sum equals the target.

```python
def two_sum_sorted(arr, target):

    left = 0

    right = len(arr) - 1

    while left < right:

        total = arr[left] + arr[right]

        if total == target:

            return [left, right]

        elif total < target:

            left += 1

        else:

            right -= 1

    return []


arr = [1, 2, 4, 6, 8, 9]

print(two_sum_sorted(arr, 10))
```

Output:

```text
[0, 5]
```

Explanation:

- If sum is smaller than target, move left forward.
- If sum is greater than target, move right backward.
- If equal, return both indices.

Time:

$$
O(n)
$$

Space:

$$
O(1)
$$

## 4. Three Sum

Problem: Find all unique triplets whose sum equals zero.

```python
def three_sum(arr):

    arr.sort()

    result = []

    for i in range(len(arr) - 2):

        if i > 0 and arr[i] == arr[i - 1]:

            continue

        left = i + 1

        right = len(arr) - 1

        while left < right:

            total = arr[i] + arr[left] + arr[right]

            if total == 0:

                result.append([
                    arr[i],
                    arr[left],
                    arr[right]
                ])

                left += 1

                right -= 1

                while left < right and arr[left] == arr[left - 1]:

                    left += 1

                while left < right and arr[right] == arr[right + 1]:

                    right -= 1

            elif total < 0:

                left += 1

            else:

                right -= 1

    return result


arr = [-1, 0, 1, 2, -1, -4]

print(three_sum(arr))
```

Output:

```text
[[-1, -1, 2], [-1, 0, 1]]
```

Time Complexity:

$$
O(n^2)
$$

Sorting requires:

$$
O(n\log n)
$$

Overall time complexity is:

$$
O(n^2)
$$

---

# PART 09 — SLIDING WINDOW INTRODUCTION

## 1. What is Sliding Window?

Sliding Window is a technique used to solve problems involving contiguous subarrays or substrings.

It maintains a window and moves it through the array without recalculating everything from scratch.

## 2. Fixed Size Sliding Window

Problem: Find maximum sum of a subarray of size k.

Example:

```python
arr = [2, 1, 5, 1, 3, 2]

k = 3
```

Possible windows:

```text
[2, 1, 5] = 8
[1, 5, 1] = 7
[5, 1, 3] = 9
[1, 3, 2] = 6
```

Maximum sum:

$$
Maximum=9
$$

### Code

```python
def max_window_sum(arr, k):

    if k <= 0 or k > len(arr):

        return None

    window_sum = sum(arr[:k])

    maximum = window_sum

    for i in range(k, len(arr)):

        window_sum += arr[i]

        window_sum -= arr[i - k]

        maximum = max(maximum, window_sum)

    return maximum


arr = [2, 1, 5, 1, 3, 2]

print(max_window_sum(arr, 3))
```

Output:

```text
9
```

Time:

$$
O(n)
$$

Auxiliary Space:

$$
O(1)
$$

---

# PART 10 — SUBARRAY AND SUBSEQUENCE

## 1. What is a Subarray?

A subarray is a contiguous portion of an array.

Example:

```text
Original: [1, 2, 3, 4]

Valid Subarrays:

[1]
[2]
[3]
[4]
[1, 2]
[2, 3]
[3, 4]
[1, 2, 3]
[2, 3, 4]
[1, 2, 3, 4]
```

Number of non-empty subarrays:

$$
\frac{n(n+1)}{2}
$$

For n = 4:

$$
\frac{4(4+1)}{2}=10
$$

## 2. What is a Subsequence?

A subsequence is a sequence obtained by deleting zero or more elements without changing the relative order of the remaining elements.

Example:

```text
Original: [1, 2, 3, 4]

Valid Subsequences:

[1, 3]
[2, 4]
[1, 2, 3]
[1, 3, 4]
[1, 2, 3, 4]
```

Total subsequences including the empty subsequence:

$$
2^n
$$

Non-empty subsequences:

$$
2^n-1
$$

For n = 4:

$$
2^4-1=15
$$

## 3. Subarray vs Subsequence

| Subarray | Subsequence |
|---|---|
| Contiguous elements | Need not be contiguous |
| Maintains order | Maintains order |
| Cannot skip intermediate elements | Can skip elements |
| n(n+1)/2 non-empty subarrays | 2^n - 1 non-empty subsequences |

---

# PART 11 — TIME AND SPACE COMPLEXITY

## 1. What is Time Complexity?

Time Complexity measures how the running time of an algorithm grows as the input size increases.

Hinglish: Input size badhne par algorithm ko kitna extra time lagega, uska growth measure karna time complexity hai.

## 2. What is Space Complexity?

Space Complexity measures how much memory an algorithm requires as input size increases.

Hinglish: Program ko execute hone ke liye kitni memory chahiye, use space complexity kehte hain.

## 3. Big-O Notation

Big-O represents an asymptotic upper bound on an algorithm's growth.

| Complexity | Name | Example |
|---|---|---|
| O(1) | Constant | Array indexing |
| O(log n) | Logarithmic | Binary Search |
| O(n) | Linear | Array Traversal |
| O(n log n) | Linearithmic | Merge Sort |
| O(n²) | Quadratic | Nested Loop |
| O(2^n) | Exponential | Some recursive algorithms |
| O(n!) | Factorial | Permutation generation |

## 4. O(1) Example

```python
arr = [10, 20, 30, 40]

print(arr[2])
```

Only one indexed access.

$$
Time=O(1)
$$

## 5. O(n) Example

```python
arr = [10, 20, 30, 40]

for num in arr:

    print(num)
```

The loop visits n elements.

$$
Time=O(n)
$$

## 6. O(n²) Example

```python
arr = [10, 20, 30, 40]

for i in arr:

    for j in arr:

        print(i, j)
```

Total operations:

$$
n\times n=n^2
$$

Therefore:

$$
Time=O(n^2)
$$

## 7. Best, Average and Worst Case

Consider Linear Search.

```python
arr = [10, 20, 30, 40, 50]
```

Best Case: Target is at the first position.

$$
O(1)
$$

Average Case:

$$
O(n)
$$

Worst Case: Target is at the last position or is absent.

$$
O(n)
$$

## 8. Auxiliary Space vs Space Complexity

Auxiliary space means additional memory used by an algorithm, excluding input storage.

Example:

```python
def find_sum(arr):

    total = 0

    for num in arr:

        total += num

    return total
```

Auxiliary Space:

$$
O(1)
$$

The input array is not counted as extra space.

For Prefix Sum:

$$
O(n)
$$

Because a new prefix array is created.

---

# PART 14 — IMPORTANT PYTHON ARRAY FUNCTIONS

```python
arr = [10, 20, 30, 40, 50]

# Array length
print(len(arr))

# Add element
arr.append(60)

# Insert element
arr.insert(1, 15)

# Remove last element
arr.pop()

# Remove specific element
arr.remove(30)

# Sort array
arr.sort()

# Reverse array
arr.reverse()

# Count occurrences
print(arr.count(10))

# Find index
print(arr.index(20))

# Sum
print(sum(arr))

# Maximum
print(max(arr))

# Minimum
print(min(arr))
```

**Important:** Built-in functions are useful, but DSA practice requires implementing the underlying logic yourself.

---

