# 18. COMPLETE STRING CHEAT SHEET

## A. Basic Operations

```python
len(s)          # Length
s[0]            # First character
s[-1]           # Last character
s[::-1]         # Reverse
s[a:b]          # Slicing
s + t           # Concatenation
s * 3           # Repetition
"abc" in s      # Membership
```

## B. Case Conversion

```python
s.upper()
s.lower()
s.capitalize()
s.title()
s.swapcase()
```

## C. Searching

```python
s.find("x")
s.index("x")
s.count("x")
s.startswith("x")
s.endswith("x")
```

## D. Checking

```python
s.isalpha()
s.isdigit()
s.isalnum()
s.islower()
s.isupper()
s.isspace()
s.isdecimal()
```

## E. Modification

```python
s.replace("a", "b")
s.strip()
s.lstrip()
s.rstrip()
s.split()
" ".join(words)
```

## F. Useful Built-in Functions

```python
len(s)
max(s)
min(s)
sorted(s)
enumerate(s)
zip(s1, s2)
ord("A")
chr(65)
```

## G. Frequency Counting

```python
from collections import Counter

frequency = Counter(s)
```

## H. Dictionary Frequency Pattern

```python
freq = {}

for char in s:

    freq[char] = freq.get(char, 0) + 1
```

## I. Two Pointer Template

```python
left = 0
right = len(s) - 1

while left < right:

    # Process characters

    left += 1
    right -= 1
```

## J. Sliding Window Template

```python
left = 0

for right in range(len(s)):

    # Add current character

    while condition:

        # Remove or update left character
        left += 1

    # Update answer
```

## K. Palindrome Template

```python
def is_palindrome(s):

    return s == s[::-1]
```

## L. Anagram Template

```python
from collections import Counter

def is_anagram(a, b):

    return Counter(a) == Counter(b)
```
