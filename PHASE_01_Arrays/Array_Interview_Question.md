# PART 13 — 25 ARRAY INTERVIEW QUESTIONS WITH ANSWERS

## BASIC LEVEL

### Q1. What is an Array?

**Answer:**

An array is a linear data structure used to store multiple elements in an ordered sequence. Each element can be accessed using an index.

Example:

```python
arr = [10, 20, 30, 40]
```

Important point: Indexed access in an array is O(1).

### Q2. Why Does Array Indexing Start from 0?

**Answer:**

Zero-based indexing represents the offset from the starting memory address.

Formula:

$$
Address(i)=BaseAddress+(i\times ElementSize)
$$

It allows direct address calculation.

### Q3. What are the Advantages of Arrays?

**Answer:**

1. Fast indexed access.
2. Easy traversal.
3. Simple implementation.
4. Efficient sequential data storage.
5. Useful for implementing other data structures.

### Q4. What are the Disadvantages of Arrays?

**Answer:**

1. Traditional arrays have fixed capacity.
2. Insertion can require shifting.
3. Deletion can require shifting.
4. Searching an unsorted array takes O(n).
5. Dynamic resizing may require copying elements.

### Q5. Static Array vs Dynamic Array?

**Answer:**

| Static Array | Dynamic Array |
|---|---|
| Fixed capacity | Can grow |
| Size generally fixed at allocation | Automatically resizes |
| Resizing needs special handling | Resizing is managed internally |
| Traditional fixed-size array | Python List |

### Q6. What is Array Traversal?

**Answer:**

Visiting every element of an array one by one.

```python
arr = [10, 20, 30]

for num in arr:

    print(num)
```

Time:

$$
O(n)
$$

### Q7. Array vs Linked List?

**Answer:**

| Array | Linked List |
|---|---|
| Traditional array uses contiguous storage | Nodes can be stored separately |
| O(1) indexed access | O(n) indexed access |
| Insertions may require shifting | Insertion can be O(1) if the node/position is known |
| Better cache locality | Extra pointer/reference memory |

### Q8. What is Length vs Capacity?

**Answer:**

- Length: Number of elements currently stored.
- Capacity: Total allocated storage.

Example:

```text
Length = 4
Capacity = 8
```

Four elements are stored, but capacity is eight.

---

## INTERMEDIATE LEVEL

### Q9. Why is Array Access O(1)?

**Answer:**

In a traditional array, an element's memory address can be calculated directly using its index.

$$
Address(i)=Base+i\times ElementSize
$$

Therefore, there is no need to search previous elements.

### Q10. Why is Insertion at the Beginning O(n)?

**Answer:**

Because existing elements must shift right to create space.

Example:

```text
Before:
[10, 20, 30, 40]

After:
[5, 10, 20, 30, 40]
```

Worst-case complexity:

$$
O(n)
$$

### Q11. Linear Search vs Binary Search?

**Answer:**

| Linear Search | Binary Search |
|---|---|
| Checks elements sequentially | Divides search space |
| Works on unsorted data | Requires sorted data |
| O(n) worst case | O(log n) worst case |
| Simple | More complex |

### Q12. What is a Subarray?

**Answer:**

A subarray is a contiguous portion of an array.

Example:

```text
[1, 2, 3, 4]

[2, 3] is a subarray.

[1, 3] is not a subarray.
```

Number of non-empty subarrays:

$$
\frac{n(n+1)}{2}
$$

### Q13. What is a Subsequence?

**Answer:**

A subsequence is obtained by deleting zero or more elements without changing the relative order of remaining elements.

Example:

```text
Original: [1, 2, 3, 4]

Subsequence: [1, 3, 4]
```

Number of non-empty subsequences:

$$
2^n-1
$$

### Q14. Subarray vs Subsequence?

**Answer:**

A subarray must contain contiguous elements. A subsequence does not need to be contiguous, but it must preserve order.

| Subarray | Subsequence |
|---|---|
| Contiguous | Not necessarily contiguous |
| Preserves order | Preserves order |
| n(n+1)/2 possibilities | 2^n - 1 possibilities |

### Q15. What is Prefix Sum?

**Answer:**

Prefix Sum stores cumulative sums to answer repeated range-sum queries efficiently.

Formula:

$$
prefix[i]=prefix[i-1]+arr[i]
$$

Range Sum:

$$
Sum(L,R)=prefix[R]-prefix[L-1]
$$

For L = 0:

$$
Sum(0,R)=prefix[R]
$$

### Q16. Explain Kadane's Algorithm.

**Answer:**

Kadane's Algorithm finds the maximum sum of a contiguous subarray.

Formula:

$$
current=\max(arr[i],current+arr[i])
$$

$$
maximum=\max(maximum,current)
$$

Time:

$$
O(n)
$$

Space:

$$
O(1)
$$

### Q17. What is Two Pointer Technique?

**Answer:**

Two Pointer uses two indices to process array elements efficiently.

Applications:

- Reverse array.
- Pair sum.
- Remove duplicates.
- Move zeros.
- Three Sum.

For a sorted pair-sum problem:

- Move left when the sum is too small.
- Move right when the sum is too large.

---

## ADVANCED LEVEL

### Q18. Kadane's Algorithm vs Brute Force?

**Answer:**

Brute force examines possible subarrays. Kadane's Algorithm uses the best sum ending at the current position.

| Approach | Time |
|---|---|
| Brute Force with repeated summation | O(n³) |
| Running-sum Brute Force | O(n²) |
| Kadane's Algorithm | O(n) |

Kadane's Algorithm is more efficient because it avoids repeatedly calculating overlapping sums.

### Q19. How to Find the Second Largest Element Without Sorting?

**Answer:**

Maintain two variables: largest and second largest.

```python
def second_largest(arr):

    first = float('-inf')

    second = float('-inf')

    for num in arr:

        if num > first:

            second = first

            first = num

        elif first > num > second:

            second = num

    return None if second == float('-inf') else second


print(second_largest([10, 30, 20, 50, 40]))
```

Output:

```text
40
```

Time:

$$
O(n)
$$

### Q20. How to Find a Missing Number?

**Answer:**

Use the mathematical sum formula.

$$
ExpectedSum=\frac{n(n+1)}{2}
$$

$$
MissingNumber=ExpectedSum-ActualSum
$$

This works when the array contains distinct numbers from 0 to n, with exactly one missing number.

### Q21. What is Sliding Window?

**Answer:**

Sliding Window maintains a contiguous window and moves it through the array to solve subarray or substring problems efficiently.

Example: Maximum sum of a fixed-size window.

```python
def max_window_sum(arr, k):

    if k <= 0 or k > len(arr):

        return None

    window_sum = sum(arr[:k])

    maximum = window_sum

    for i in range(k, len(arr)):

        window_sum += arr[i]

        window_sum -= arr[i-k]

        maximum = max(maximum, window_sum)

    return maximum
```

Time:

$$
O(n)
$$

### Q22. Sliding Window vs Two Pointer?

**Answer:**

| Sliding Window | Two Pointer |
|---|---|
| Maintains a window | Uses two indices |
| Usually contiguous data | Broader applications |
| Fixed or variable size | Same or opposite directions |
| Maximum window sum | Pair sum |

Sliding Window is often implemented using two pointers.

### Q23. What is an In-Place Algorithm?

**Answer:**

An in-place algorithm modifies the original data structure using a constant amount of auxiliary space.

Example: Reversing an array through two pointers.

Auxiliary Space:

$$
O(1)
$$

### Q24. What is Stable Sorting?

**Answer:**

A stable sorting algorithm preserves the relative order of equal-key elements.

Examples:

- Bubble Sort (standard implementation).
- Insertion Sort.
- Merge Sort (with correct handling of equal elements).

Common in-place Quick Sort implementations are generally unstable.

### Q25. Which Array Patterns Should You Master?

**Answer:**

| Pattern | Important Problems |
|---|---|
| Traversal | Sum, Maximum, Minimum |
| Linear Search | Find Target |
| Binary Search | Search Sorted Array |
| Prefix Sum | Range Sum |
| Hashing | Two Sum, Frequency |
| Two Pointers | Reverse, Three Sum |
| Sliding Window | Maximum Window Sum |
| Kadane's Algorithm | Maximum Subarray |
| Sorting | Duplicates and Ordering |
| In-place Modification | Move Zeros |

**Interview Tip:** Interviewers expect you to explain your approach, discuss edge cases, write correct code and analyze complexity.

---