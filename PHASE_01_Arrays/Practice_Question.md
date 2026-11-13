# PART 12 — 20 IMPORTANT ARRAY CODING QUESTIONS

## LEVEL 1 — BEGINNER

### Q1. Print All Elements

**Problem:** Print every element of an array.

```python
def print_array(arr):

    for num in arr:

        print(num)


arr = [10, 20, 30, 40, 50]

print_array(arr)
```

Output:

```text
10
20
30
40
50
```

Explanation: The loop visits each element exactly once.

Time:

$$
O(n)
$$

Space:

$$
O(1)
$$

### Q2. Find Sum of Array Elements

```python
def array_sum(arr):

    total = 0

    for num in arr:

        total += num

    return total


print(array_sum([10, 20, 30, 40]))
```

Output:

```text
100
```

Explanation: Initialize total with zero and add each element.

Time:

$$
O(n)
$$

Space:

$$
O(1)
$$

### Q3. Find Maximum Element

```python
def find_max(arr):

    if not arr:

        return None

    maximum = arr[0]

    for num in arr:

        if num > maximum:

            maximum = num

    return maximum


print(find_max([10, 50, 90, 30, 20]))
```

Output:

```text
90
```

Time:

$$
O(n)
$$

Space:

$$
O(1)
$$

### Q4. Find Minimum Element

```python
def find_min(arr):

    if not arr:

        return None

    minimum = arr[0]

    for num in arr:

        if num < minimum:

            minimum = num

    return minimum


print(find_min([10, 50, 90, 30, 20]))
```

Output:

```text
10
```

### Q5. Reverse an Array

```python
def reverse_array(arr):

    left = 0

    right = len(arr) - 1

    while left < right:

        arr[left], arr[right] = arr[right], arr[left]

        left += 1

        right -= 1

    return arr


print(reverse_array([1, 2, 3, 4, 5]))
```

Output:

```text
[5, 4, 3, 2, 1]
```

Time:

$$
O(n)
$$

Space:

$$
O(1)
$$

### Q6. Count Even and Odd Numbers

```python
def count_even_odd(arr):

    even = 0

    odd = 0

    for num in arr:

        if num % 2 == 0:

            even += 1

        else:

            odd += 1

    return even, odd


print(count_even_odd([1, 2, 3, 4, 5, 6]))
```

Output:

```text
(3, 3)
```

### Q7. Linear Search

```python
def linear_search(arr, target):

    for i in range(len(arr)):

        if arr[i] == target:

            return i

    return -1


print(linear_search([10, 20, 30, 40], 30))
```

Output:

```text
2
```

---

## LEVEL 2 — INTERMEDIATE

### Q8. Find Second Largest Distinct Element

```python
def second_largest(arr):

    if len(arr) < 2:

        return None

    largest = float('-inf')

    second = float('-inf')

    for num in arr:

        if num > largest:

            second = largest

            largest = num

        elif num > second and num != largest:

            second = num

    if second == float('-inf'):

        return None

    return second


print(second_largest([10, 50, 30, 90, 90, 70]))
```

Output:

```text
70
```

Explanation:

- Track the largest value.
- Track the second-largest distinct value.
- Update both when a new maximum appears.
- Ignore duplicates of the maximum.

Time:

$$
O(n)
$$

Space:

$$
O(1)
$$

### Q9. Check Whether an Array is Sorted

```python
def is_sorted(arr):

    for i in range(1, len(arr)):

        if arr[i] < arr[i - 1]:

            return False

    return True


print(is_sorted([10, 20, 30, 40]))

print(is_sorted([10, 30, 20, 40]))
```

Output:

```text
True
False
```

Time:

$$
O(n)
$$

Space:

$$
O(1)
$$

### Q10. Remove Duplicates from a Sorted Array

```python
def remove_duplicates(arr):

    if not arr:

        return 0

    j = 0

    for i in range(1, len(arr)):

        if arr[i] != arr[j]:

            j += 1

            arr[j] = arr[i]

    return j + 1


arr = [1, 1, 2, 2, 3, 4, 4]

k = remove_duplicates(arr)

print("Unique Count:", k)

print("Unique Elements:", arr[:k])
```

Output:

```text
Unique Count: 4
Unique Elements: [1, 2, 3, 4]
```

Explanation: Use a slow pointer to maintain unique elements and a fast pointer to examine the array.

Time:

$$
O(n)
$$

Auxiliary Space:

$$
O(1)
$$

### Q11. Move All Zeros to the End

```python
def move_zeros(arr):

    position = 0

    for i in range(len(arr)):

        if arr[i] != 0:

            arr[position] = arr[i]

            position += 1

    while position < len(arr):

        arr[position] = 0

        position += 1

    return arr


print(move_zeros([0, 1, 0, 3, 12]))
```

Output:

```text
[1, 3, 12, 0, 0]
```

Time:

$$
O(n)
$$

Auxiliary Space:

$$
O(1)
$$

### Q12. Find Missing Number from 0 to n

```python
def missing_number(arr):

    n = len(arr)

    expected = n * (n + 1) // 2

    actual = 0

    for num in arr:

        actual += num

    return expected - actual


print(missing_number([3, 0, 1]))
```

Output:

```text
2
```

Formula:

$$
ExpectedSum=\frac{n(n+1)}{2}
$$

$$
MissingNumber=ExpectedSum-ActualSum
$$

Time:

$$
O(n)
$$

Space:

$$
O(1)
$$

### Q13. Find Duplicate Elements

```python
def find_duplicates(arr):

    frequency = {}

    duplicates = []

    for num in arr:

        frequency[num] = frequency.get(num, 0) + 1

    for num, count in frequency.items():

        if count > 1:

            duplicates.append(num)

    return duplicates


print(find_duplicates([1, 2, 3, 2, 4, 1, 5]))
```

Output:

```text
[1, 2]
```

Time:

$$
O(n)
$$

Auxiliary Space:

$$
O(n)
$$

### Q14. Rotate Array by K Positions to the Right

```python
def rotate_array(arr, k):

    n = len(arr)

    if n == 0:

        return arr

    k = k % n

    arr.reverse()

    arr[:k] = reversed(arr[:k])

    arr[k:] = reversed(arr[k:])

    return arr


print(rotate_array([1, 2, 3, 4, 5, 6, 7], 3))
```

Output:

```text
[5, 6, 7, 1, 2, 3, 4]
```

Explanation:

1. Reverse the complete array.
2. Reverse the first k elements.
3. Reverse the remaining elements.

Time:

$$
O(n)
$$

Auxiliary Space:

$$
O(k)
$$

The Python slice-based implementation creates temporary data.

---

## LEVEL 3 — ADVANCED

### Q15. Two Sum

Problem: Find indices of two numbers whose sum equals the target.

```python
def two_sum(arr, target):

    seen = {}

    for i, num in enumerate(arr):

        required = target - num

        if required in seen:

            return [seen[required], i]

        seen[num] = i

    return []


print(two_sum([2, 7, 11, 15], 9))
```

Output:

```text
[0, 1]
```

Formula:

$$
Required=Target-CurrentElement
$$

Time:

$$
O(n)
$$

Average Auxiliary Space:

$$
O(n)
$$

### Q16. Maximum Subarray Sum

```python
def max_subarray_sum(arr):

    if not arr:

        return 0

    current = arr[0]

    maximum = arr[0]

    for num in arr[1:]:

        current = max(num, current + num)

        maximum = max(maximum, current)

    return maximum


print(max_subarray_sum([-2, 1, -3, 4, -1, 2, 1, -5, 4]))
```

Output:

```text
6
```

Formula:

$$
current=\max(num,current+num)
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

### Q17. Find Equilibrium Index

Problem: Find an index where the sum of the left elements equals the sum of the right elements.

```python
def equilibrium_index(arr):

    total = sum(arr)

    left_sum = 0

    for i in range(len(arr)):

        right_sum = total - left_sum - arr[i]

        if left_sum == right_sum:

            return i

        left_sum += arr[i]

    return -1


print(equilibrium_index([1, 3, 5, 2, 2]))
```

Output:

```text
2
```

Formula:

$$
RightSum=TotalSum-LeftSum-CurrentElement
$$

Condition:

$$
LeftSum=RightSum
$$

Time:

$$
O(n)
$$

Auxiliary Space:

$$
O(1)
$$

### Q18. Maximum Stock Profit

Problem: Find maximum profit by buying once and selling later.

```python
def max_profit(prices):

    minimum_price = float('inf')

    maximum_profit = 0

    for price in prices:

        if price < minimum_price:

            minimum_price = price

        else:

            profit = price - minimum_price

            maximum_profit = max(
                maximum_profit,
                profit
            )

    return maximum_profit


print(max_profit([7, 1, 5, 3, 6, 4]))
```

Output:

```text
5
```

Formula:

$$
Profit=SellingPrice-BuyingPrice
$$

Time:

$$
O(n)
$$

Space:

$$
O(1)
$$

### Q19. Subarray Sum Equals K

Problem: Count the number of contiguous subarrays whose sum equals k.

```python
def subarray_sum(arr, k):

    prefix_count = {0: 1}

    current_sum = 0

    count = 0

    for num in arr:

        current_sum += num

        required = current_sum - k

        count += prefix_count.get(required, 0)

        prefix_count[current_sum] = (
            prefix_count.get(current_sum, 0) + 1
        )

    return count


print(subarray_sum([1, 1, 1], 2))
```

Output:

```text
2
```

Important Formula:

$$
RequiredPrefix=CurrentPrefix-k
$$

Explanation:

1. Calculate the current prefix sum.
2. Find the earlier prefix sum required to make the difference k.
3. Add its frequency to the answer.
4. Update the current prefix sum frequency.

Time:

$$
O(n)
$$

Average Auxiliary Space:

$$
O(n)
$$

This approach also works with negative numbers.

### Q20. Three Sum

Problem: Find all unique triplets whose sum is zero.

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


print(three_sum([-1, 0, 1, 2, -1, -4]))
```

Output:

```text
[[-1, -1, 2], [-1, 0, 1]]
```

Time:

$$
O(n^2)
$$

---