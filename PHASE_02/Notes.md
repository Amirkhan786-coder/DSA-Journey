# PHASE 02 — STRINGS
## Complete Python & DSA Notes
### Beginner to Advanced | Concepts + Programs + Patterns + Questions

**Phase:** 02 — Strings  
**Status:** In Progress  
**Language:** Python  
**Level:** Beginner → Intermediate → Advanced  
**Goal:** Master String Concepts, Problem-Solving Patterns and Coding Interview Questions.

---

# TABLE OF CONTENTS

1. Introduction to Strings
2. String Basics
3. String Indexing
4. String Slicing
5. String Immutability
6. String Methods
7. Character Frequency
8. Palindrome
9. Anagrams
10. String Searching
11. String Manipulation
12. Important DSA Patterns
13. Python String Programs
14. Time and Space Complexity
15. Common Mistakes
16. Interview Questions
17. Coding Practice Questions
18. Complete Cheat Sheet
19. Phase Completion Checklist

---

# 1. INTRODUCTION TO STRINGS

## 1.1 What is a String?

A String is a sequence of characters enclosed within quotation marks.

In Python, strings are used to store and manipulate text data.

**Example:**

```python
name = "Amir"
message = 'Hello World'
language = "Python"
```

Here:
- `Amir` is a string.
- `Hello World` is a string.
- `Python` is a string.

A string can contain:
- Alphabets
- Numbers
- Special characters
- Spaces
- Symbols
- Unicode characters

**Example:**

```python
text = "Python123@#$"
```

## 1.2 Creating Strings

Python supports three common ways to create strings.

```python
# Single quotes
a = 'Python'

# Double quotes
b = "Python"

# Triple quotes
c = """Python is a programming language."""

print(a)
print(b)
print(c)
```

Triple quotes are useful for multiline strings.

```python
message = """
Welcome to Python.
Learn DSA.
Practice Daily.
"""

print(message)
```

## 1.3 Strings are Sequences

A string is an ordered sequence of characters.

Example:

```python
word = "PYTHON"
```

Character positions:

| Character | P | Y | T | H | O | N |
|---|---|---|---|---|---|---|
| Index | 0 | 1 | 2 | 3 | 4 | 5 |
| Negative Index | -6 | -5 | -4 | -3 | -2 | -1 |

Total length:

$$
Length = 6
$$

## 1.4 Finding String Length

Python provides the `len()` function.

```python
text = "Python"

print(len(text))
```

Output:

```text
6
```

Time Complexity:

$$
O(1)
$$

---

# 2. STRING BASICS

## 2.1 Accessing Characters

We can access individual characters using indexing.

Syntax:

```python
string[index]
```

Example:

```python
text = "PYTHON"

print(text[0])
print(text[1])
print(text[2])
print(text[5])
```

Output:

```text
P
Y
T
N
```

## 2.2 Positive Indexing

Positive indexing starts from zero.

```python
word = "COMPUTER"

print(word[0])  # C
print(word[1])  # O
print(word[2])  # M
```

## 2.3 Negative Indexing

Negative indexing starts from the end.

```python
word = "COMPUTER"

print(word[-1])  # R
print(word[-2])  # E
print(word[-3])  # T
```

Remember:

- Index 0 = First character.
- Index -1 = Last character.
- Index -2 = Second last character.

## 2.4 Traversing a String

Traversing means visiting every character of a string one by one.

### Method 1: Using for loop

```python
text = "PYTHON"

for char in text:
    print(char)
```

### Method 2: Using indexing

```python
text = "PYTHON"

for i in range(len(text)):
    print(text[i])
```

### Method 3: Using while loop

```python
text = "PYTHON"

i = 0

while i < len(text):
    print(text[i])
    i += 1
```

Time Complexity:

$$
O(n)
$$

Space Complexity:

$$
O(1)
$$

## 2.5 Checking String Membership

Use `in` and `not in`.

```python
text = "Python Programming"

print("Python" in text)
print("Java" in text)
print("Java" not in text)
```

Output:

```text
True
False
True
```

## 2.6 String Concatenation

Combining two or more strings is called concatenation.

```python
a = "Hello"
b = "World"

result = a + " " + b

print(result)
```

Output:

```text
Hello World
```

## 2.7 String Repetition

The `*` operator repeats strings.

```python
text = "Python "

print(text * 3)
```

Output:

```text
Python Python Python
```

## 2.8 Taking String Input

```python
name = input("Enter your name: ")

print("Hello", name)
```

By default, `input()` returns a string.

```python
number = input("Enter number: ")

print(type(number))
```

Output:

```text
<class 'str'>
```

---

# 3. STRING SLICING

## 3.1 What is Slicing?

Slicing means extracting a portion of a string.

Syntax:

```python
string[start:stop:step]
```

Parameters:

- start: Starting index (included).
- stop: Ending index (excluded).
- step: Number of positions to move.

Example:

```python
text = "PYTHON"

print(text[0:3])
```

Output:

```text
PYT
```

The ending index is not included.

## 3.2 Basic Slicing

```python
text = "PROGRAMMING"

print(text[0:4])
print(text[2:6])
print(text[4:9])
```

## 3.3 Omitting Start Index

```python
text = "PYTHON"

print(text[:3])
```

Output:

```text
PYT
```

## 3.4 Omitting End Index

```python
text = "PYTHON"

print(text[2:])
```

Output:

```text
THON
```

## 3.5 Complete String

```python
text = "PYTHON"

print(text[:])
```

## 3.6 Slicing with Step

```python
text = "PYTHON"

print(text[::2])
```

Output:

```text
PTO
```

## 3.7 Reverse a String Using Slicing

```python
text = "PYTHON"

print(text[::-1])
```

Output:

```text
NOHTYP
```

## 3.8 Important Slicing Examples

```python
text = "ABCDEFGHIJ"

print(text[1:5])    # BCDE
print(text[2:8])    # CDEFGH
print(text[:5])     # ABCDE
print(text[5:])     # FGHIJ
print(text[::2])    # ACEGI
print(text[1::2])   # BDFHJ
print(text[::-1])   # JIHGFEDCBA
print(text[-4:])    # GHIJ
print(text[-5:-1])  # FGHI
```

## 3.9 Slicing Complexity

For a slice containing k characters:

$$
Time = O(k)
$$

Space Complexity:

$$
Space = O(k)
$$

Python creates a new string for the slice.

---

# 4. STRING IMMUTABILITY

## 4.1 What is Immutability?

Strings in Python are immutable.

Immutable means that once a string is created, its individual characters cannot be changed directly.

Example:

```python
text = "PYTHON"

text[0] = "J"
```

Output:

```text
TypeError: 'str' object does not support item assignment
```

## 4.2 How to Modify a String?

Create a new string instead.

```python
text = "PYTHON"

new_text = "J" + text[1:]

print(new_text)
```

Output:

```text
JYTHON
```

## 4.3 Difference Between Mutable and Immutable

| Mutable | Immutable |
|---|---|
| Can be modified | Cannot be modified |
| List | String |
| Dictionary | Tuple |
| Set | Integer |

## 4.4 Why are Strings Immutable?

1. They are safer to share between different parts of a program.
2. They can be used as dictionary keys.
3. They support predictable behavior.
4. They allow certain Python optimizations.

Important:

A string operation generally creates a new string instead of modifying the original one.

---

# 5. IMPORTANT STRING METHODS

## 5.1 Case Conversion

### upper()

Converts all characters into uppercase.

```python
text = "python"

print(text.upper())
```

Output:

```text
PYTHON
```

### lower()

Converts all characters into lowercase.

```python
text = "PYTHON"

print(text.lower())
```

Output:

```text
python
```

### capitalize()

Converts the first character to uppercase and the remaining characters to lowercase.

```python
text = "hello WORLD"

print(text.capitalize())
```

Output:

```text
Hello world
```

### title()

Converts the first character of each word to uppercase.

```python
text = "python programming"

print(text.title())
```

Output:

```text
Python Programming
```

### swapcase()

Changes uppercase to lowercase and lowercase to uppercase.

```python
text = "PyThOn"

print(text.swapcase())
```

## 5.2 Searching Methods

### find()

Returns the first index of a substring.

```python
text = "Python Programming"

print(text.find("Pro"))
```

Output:

```text
7
```

If the substring is not found, it returns -1.

### index()

Similar to `find()`, but raises an error if the substring is not found.

```python
text = "Python"

print(text.index("t"))
```

### count()

Counts occurrences of a substring.

```python
text = "banana"

print(text.count("a"))
```

Output:

```text
3
```

### startswith()

Checks whether a string starts with a given substring.

```python
text = "Python Programming"

print(text.startswith("Python"))
```

### endswith()

Checks whether a string ends with a given substring.

```python
text = "Python Programming"

print(text.endswith("Programming"))
```

## 5.3 Checking Methods

```python
text = "Python123"

print(text.isalpha())
print(text.isdigit())
print(text.isalnum())
print(text.islower())
print(text.isupper())
print(text.isspace())
```

Important methods:

| Method | Purpose |
|---|---|
| isalpha() | Checks alphabetic characters |
| isdigit() | Checks digit characters |
| isalnum() | Checks letters and digits |
| islower() | Checks lowercase |
| isupper() | Checks uppercase |
| isspace() | Checks whitespace |
| istitle() | Checks title case |
| isdecimal() | Checks decimal characters |

## 5.4 Removing Spaces

### strip()

Removes leading and trailing whitespace.

```python
text = "  Python  "

print(text.strip())
```

### lstrip()

Removes leading whitespace.

```python
text = "  Python"

print(text.lstrip())
```

### rstrip()

Removes trailing whitespace.

```python
text = "Python  "

print(text.rstrip())
```

## 5.5 Replacing Characters

```python
text = "I like Java"

result = text.replace("Java", "Python")

print(result)
```

Output:

```text
I like Python
```

## 5.6 Splitting Strings

The `split()` method converts a string into a list.

```python
text = "Python is easy"

words = text.split()

print(words)
```

Output:

```text
['Python', 'is', 'easy']
```

Splitting using a delimiter:

```python
text = "apple,banana,mango"

result = text.split(",")

print(result)
```

## 5.7 Joining Strings

The `join()` method combines multiple strings.

```python
words = ["Python", "is", "easy"]

result = " ".join(words)

print(result)
```

Output:

```text
Python is easy
```

## 5.8 String Formatting

### f-string

```python
name = "Amir"
age = 20

print(f"My name is {name} and I am {age} years old.")
```

### format()

```python
name = "Amir"

print("Hello {}".format(name))
```

## 5.9 Escape Characters

| Character | Meaning |
|---|---|
| \n | New line |
| \t | Tab |
| \\ | Backslash |
| \' | Single quote |
| \" | Double quote |
| \r | Carriage return |

Example:

```python
print("Hello\nWorld")
print("Python\tProgramming")
```

---

# 6. CHARACTER FREQUENCY

## 6.1 What is Character Frequency?

Character frequency means counting how many times each character appears in a string.

Example:

```text
Input: banana

Output:
b = 1
a = 3
n = 2
```

This is one of the most important string problems in DSA.

## 6.2 Approach 1: Using Dictionary

```python
text = "banana"

frequency = {}

for char in text:

    if char in frequency:
        frequency[char] += 1

    else:
        frequency[char] = 1

print(frequency)
```

Output:

```text
{'b': 1, 'a': 3, 'n': 2}
```

Logic:

1. Create an empty dictionary.
2. Traverse every character.
3. Check whether the character exists.
4. If it exists, increase its count.
5. Otherwise, initialize its count to 1.

Complexity:

$$
Time = O(n)
$$

$$
Space = O(k)
$$

Where k represents the number of distinct characters.

## 6.3 Approach 2: Using get()

```python
text = "banana"

frequency = {}

for char in text:

    frequency[char] = frequency.get(char, 0) + 1

print(frequency)
```

`get(char, 0)` returns the current frequency or zero if the character is not present.

## 6.4 Approach 3: Using Counter

```python
from collections import Counter

text = "banana"

frequency = Counter(text)

print(frequency)
```

## 6.5 Count Frequency of a Particular Character

```python
text = "programming"

target = "g"

count = 0

for char in text:

    if char == target:
        count += 1

print(count)
```

## 6.6 Find Maximum Frequency Character

```python
text = "banana"

frequency = {}

for char in text:

    frequency[char] = frequency.get(char, 0) + 1

max_char = max(frequency, key=frequency.get)

print(max_char)
```

## 6.7 Find Minimum Frequency Character

```python
text = "banana"

frequency = {}

for char in text:

    frequency[char] = frequency.get(char, 0) + 1

min_char = min(frequency, key=frequency.get)

print(min_char)
```

## 6.8 First Non-Repeating Character

```python
text = "swiss"

frequency = {}

for char in text:
    frequency[char] = frequency.get(char, 0) + 1

for char in text:

    if frequency[char] == 1:
        print(char)
        break
```

Output:

```text
w
```

## 6.9 First Repeating Character

```python
text = "programming"

seen = set()

for char in text:

    if char in seen:
        print(char)
        break

    seen.add(char)
```

## 6.10 Remove Duplicate Characters

```python
text = "programming"

result = ""

seen = set()

for char in text:

    if char not in seen:
        result += char
        seen.add(char)

print(result)
```

Output:

```text
progamin
```

For better performance on large strings, use a list and `''.join()` instead of repeated concatenation.

---

# 7. PALINDROME

## 7.1 What is a Palindrome?

A palindrome is a word, number or sequence that reads the same forward and backward.

Examples:

```text
madam
level
racecar
121
1221
```

Non-palindromes:

```text
hello
python
computer
```

## 7.2 Mathematical Representation

A string S of length n is a palindrome if:

$$
S[i] = S[n-1-i]
$$

For every valid index i.

## 7.3 Approach 1: Reverse Slicing

```python
text = input("Enter a string: ")

if text == text[::-1]:

    print("Palindrome")

else:

    print("Not Palindrome")
```

## 7.4 Approach 2: Two Pointer Technique

This is an important DSA pattern.

```python
def is_palindrome(text):

    left = 0
    right = len(text) - 1

    while left < right:

        if text[left] != text[right]:
            return False

        left += 1
        right -= 1

    return True


print(is_palindrome("madam"))
print(is_palindrome("python"))
```

Complexity:

$$
Time = O(n)
$$

$$
Space = O(1)
$$

## 7.5 Case-Insensitive Palindrome

```python
text = "Madam"

text = text.lower()

print(text == text[::-1])
```

## 7.6 Palindrome Ignoring Spaces and Special Characters

```python
def is_palindrome(text):

    cleaned = ""

    for char in text.lower():

        if char.isalnum():
            cleaned += char

    return cleaned == cleaned[::-1]


print(is_palindrome("A man, a plan, a canal: Panama"))
```

Output:

```text
True
```

## 7.7 Important Palindrome Problems

1. Check whether a string is a palindrome.
2. Check whether a number is a palindrome.
3. Find the longest palindromic substring.
4. Count palindromic substrings.
5. Valid palindrome after removing one character.
6. Check palindrome ignoring spaces.
7. Check palindrome ignoring punctuation.
8. Find the shortest string that makes a palindrome.

---

# 8. ANAGRAMS

## 8.1 What is an Anagram?

Two strings are anagrams if they contain exactly the same characters with the same frequencies, but possibly in a different order.

Examples:

```text
listen
silent
```

```text
earth
heart
```

```text
race
care
```

Non-anagrams:

```text
hello
world
```

## 8.2 Mathematical Representation

Two strings A and B are anagrams if:

$$
Length(A) = Length(B)
$$

And:

$$
Frequency_A(c) = Frequency_B(c)
$$

For every character c.

## 8.3 Approach 1: Sorting

```python
def are_anagrams(a, b):

    a = a.replace(" ", "").lower()
    b = b.replace(" ", "").lower()

    return sorted(a) == sorted(b)


print(are_anagrams("listen", "silent"))
print(are_anagrams("hello", "world"))
```

Complexity:

$$
Time = O(n \log n)
$$

## 8.4 Approach 2: Character Frequency Dictionary

```python
def are_anagrams(a, b):

    if len(a) != len(b):
        return False

    frequency = {}

    for char in a:
        frequency[char] = frequency.get(char, 0) + 1

    for char in b:

        if char not in frequency:
            return False

        frequency[char] -= 1

        if frequency[char] < 0:
            return False

    return True


print(are_anagrams("listen", "silent"))
```

Complexity:

$$
Time = O(n)
$$

$$
Space = O(k)
$$

## 8.5 Approach 3: Using Counter

```python
from collections import Counter

def are_anagrams(a, b):

    return Counter(a) == Counter(b)


print(are_anagrams("listen", "silent"))
```

## 8.6 Group Anagrams

Problem:

```text
Input:
["eat", "tea", "tan", "ate", "nat", "bat"]

Output:
[
    ["eat", "tea", "ate"],
    ["tan", "nat"],
    ["bat"]
]
```

Solution:

```python
from collections import defaultdict

def group_anagrams(words):

    groups = defaultdict(list)

    for word in words:

        key = tuple(sorted(word))

        groups[key].append(word)

    return list(groups.values())


words = ["eat", "tea", "tan", "ate", "nat", "bat"]

print(group_anagrams(words))
```

---

# 9. STRING SEARCHING

## 9.1 What is String Searching?

String searching means finding a character or substring inside another string.

Example:

```text
Text: Python Programming
Pattern: Program

Result: Found
```

## 9.2 Searching a Character

```python
text = "programming"

target = "g"

for i in range(len(text)):

    if text[i] == target:
        print("Found at index:", i)
```

## 9.3 Searching a Substring Using in

```python
text = "Python Programming"

pattern = "Programming"

if pattern in text:
    print("Found")
else:
    print("Not Found")
```

## 9.4 Searching Using find()

```python
text = "Python Programming"

index = text.find("Program")

print(index)
```

## 9.5 Naive Pattern Searching Algorithm

The naive algorithm checks the pattern at every possible position in the text.

Example:

```text
Text = ABCABC
Pattern = ABC
```

Code:

```python
def naive_search(text, pattern):

    n = len(text)
    m = len(pattern)

    for i in range(n - m + 1):

        j = 0

        while j < m and text[i + j] == pattern[j]:
            j += 1

        if j == m:
            print("Pattern found at index:", i)


naive_search("ABCABC", "ABC")
```

Output:

```text
Pattern found at index: 0
Pattern found at index: 3
```

Worst-case Time Complexity:

$$
O(n \times m)
$$

Space Complexity:

$$
O(1)
$$

## 9.6 KMP Algorithm

KMP stands for Knuth-Morris-Pratt.

It is an advanced string searching algorithm.

It avoids repeatedly comparing characters that have already matched.

Main concept:

**LPS = Longest Proper Prefix which is also a Suffix.**

Example:

```text
String: ABABC

Longest proper prefix and suffix:
AB
```

KMP uses the LPS array to skip unnecessary comparisons.

Time Complexity:

$$
O(n + m)
$$

Space Complexity:

$$
O(m)
$$

Python implementation:

```python
def build_lps(pattern):

    lps = [0] * len(pattern)

    length = 0
    i = 1

    while i < len(pattern):

        if pattern[i] == pattern[length]:

            length += 1
            lps[i] = length
            i += 1

        else:

            if length != 0:
                length = lps[length - 1]

            else:
                lps[i] = 0
                i += 1

    return lps


def kmp_search(text, pattern):

    if not pattern:
        return []

    lps = build_lps(pattern)

    i = 0
    j = 0

    result = []

    while i < len(text):

        if text[i] == pattern[j]:

            i += 1
            j += 1

        if j == len(pattern):

            result.append(i - j)
            j = lps[j - 1]

        elif i < len(text) and text[i] != pattern[j]:

            if j != 0:
                j = lps[j - 1]

            else:
                i += 1

    return result


print(kmp_search("ABABCABCAB", "ABC"))
```

---

# 10. STRING MANIPULATION

String manipulation means modifying, transforming, rearranging or processing string data.

## 10.1 Reverse a String

```python
text = "Python"

print(text[::-1])
```

## 10.2 Reverse Without Slicing

```python
text = "Python"

result = ""

for char in text:
    result = char + result

print(result)
```

## 10.3 Count Vowels and Consonants

```python
text = "programming"

vowels = 0
consonants = 0

for char in text.lower():

    if char.isalpha():

        if char in "aeiou":
            vowels += 1

        else:
            consonants += 1

print("Vowels:", vowels)
print("Consonants:", consonants)
```

## 10.4 Count Words

```python
text = "Python is a powerful language"

words = text.split()

print(len(words))
```

## 10.5 Reverse Each Word

```python
text = "Python is easy"

words = text.split()

result = []

for word in words:
    result.append(word[::-1])

print(" ".join(result))
```

Output:

```text
nohtyP si ysae
```

## 10.6 Reverse Word Order

```python
text = "Python is easy"

words = text.split()

result = " ".join(words[::-1])

print(result)
```

Output:

```text
easy is Python
```

## 10.7 Remove All Spaces

```python
text = "Python is easy"

result = text.replace(" ", "")

print(result)
```

## 10.8 Remove Special Characters

```python
text = "Python@123#Programming!"

result = ""

for char in text:

    if char.isalnum() or char.isspace():
        result += char

print(result)
```

## 10.9 Replace Multiple Spaces with One Space

```python
text = "Python    is     easy"

result = " ".join(text.split())

print(result)
```

## 10.10 Capitalize Every Word

```python
text = "python programming language"

print(text.title())
```

## 10.11 Toggle Character Case

```python
text = "PyThOn"

result = text.swapcase()

print(result)
```

## 10.12 Check Whether a String Contains Only Digits

```python
text = "123456"

print(text.isdigit())
```

## 10.13 Remove Duplicate Characters

```python
def remove_duplicates(text):

    seen = set()
    result = []

    for char in text:

        if char not in seen:

            seen.add(char)
            result.append(char)

    return "".join(result)


print(remove_duplicates("programming"))
```

## 10.14 Find the Most Frequent Word

```python
from collections import Counter

text = "python is easy and python is powerful"

words = text.lower().split()

frequency = Counter(words)

print(frequency.most_common(1))
```

## 10.15 Check String Rotation

Two strings are rotations of each other if one can be obtained by rotating the other.

Example:

```text
ABCD
CDAB
```

Solution:

```python
def is_rotation(a, b):

    return len(a) == len(b) and b in (a + a)


print(is_rotation("ABCD", "CDAB"))
```

---

# 11. IMPORTANT DSA STRING PATTERNS

Understanding patterns is more important than memorizing programs.

## Pattern 1: Two Pointers

Used for:

- Palindrome checking.
- Reverse string problems.
- Comparing characters from both ends.
- Removing characters from both ends.

Example:

```python
def reverse_string(text):

    chars = list(text)

    left = 0
    right = len(chars) - 1

    while left < right:

        chars[left], chars[right] = chars[right], chars[left]

        left += 1
        right -= 1

    return "".join(chars)


print(reverse_string("PYTHON"))
```

Complexity:

$$
Time = O(n)
$$

$$
Space = O(n)
$$

Note: Python strings are immutable, so we convert the string to a list.

## Pattern 2: Hashing / Frequency Counting

Used for:

- Anagrams.
- Duplicate characters.
- First non-repeating character.
- Maximum frequency character.
- Character counting.

Example:

```python
def frequency_count(text):

    freq = {}

    for char in text:

        freq[char] = freq.get(char, 0) + 1

    return freq


print(frequency_count("banana"))
```

## Pattern 3: Sliding Window

Used for:

- Longest substring without repeating characters.
- Longest substring with a given condition.
- Minimum window substring.
- Finding substrings of fixed size.

Example: Longest Substring Without Repeating Characters.

```python
def longest_unique_substring(text):

    seen = {}

    left = 0
    max_length = 0

    for right in range(len(text)):

        char = text[right]

        if char in seen and seen[char] >= left:
            left = seen[char] + 1

        seen[char] = right

        max_length = max(max_length, right - left + 1)

    return max_length


print(longest_unique_substring("abcabcbb"))
```

Output:

```text
3
```

Complexity:

$$
Time = O(n)
$$

$$
Space = O(k)
$$

## Pattern 4: Sorting

Used for:

- Anagram checking.
- Grouping anagrams.
- Comparing character sequences.

Example:

```python
a = "listen"
b = "silent"

print(sorted(a) == sorted(b))
```

## Pattern 5: Prefix and Suffix

Used for:

- Common prefix.
- Prefix matching.
- Suffix matching.
- KMP algorithm.

Example: Longest Common Prefix.

```python
def longest_common_prefix(words):

    if not words:
        return ""

    prefix = words[0]

    for word in words[1:]:

        while not word.startswith(prefix):

            prefix = prefix[:-1]

            if not prefix:
                return ""

    return prefix


words = ["flower", "flow", "flight"]

print(longest_common_prefix(words))
```

Output:

```text
fl
```

## Pattern 6: Stack

Used for:

- Valid parentheses.
- Removing adjacent duplicates.
- Simplifying strings.
- Decoding strings.

Example: Valid Parentheses.

```python
def is_valid(text):

    stack = []

    pairs = {
        ")": "(",
        "]": "[",
        "}": "{"
    }

    for char in text:

        if char in "([{":
            stack.append(char)

        else:

            if not stack or stack.pop() != pairs.get(char):
                return False

    return len(stack) == 0


print(is_valid("({[]})"))
print(is_valid("({[})"))
```

---

# 12. ADDITIONAL IMPORTANT STRING PROGRAMS

## Program 1: Check Empty String

```python
text = ""

if not text:
    print("Empty String")
else:
    print("Not Empty")
```

## Program 2: Find ASCII Value

```python
char = "A"

print(ord(char))
```

Output:

```text
65
```

## Program 3: Convert ASCII to Character

```python
number = 65

print(chr(number))
```

Output:

```text
A
```

## Program 4: Check Alphabet

```python
char = "A"

if char.isalpha():
    print("Alphabet")
else:
    print("Not Alphabet")
```

## Program 5: Check Uppercase or Lowercase

```python
char = "A"

if char.isupper():
    print("Uppercase")

elif char.islower():
    print("Lowercase")

else:
    print("Not an alphabetic case")
```

## Program 6: Remove a Particular Character

```python
text = "programming"

target = "m"

result = text.replace(target, "")

print(result)
```

## Program 7: Find All Character Positions

```python
text = "banana"
target = "a"

for i, char in enumerate(text):

    if char == target:
        print(i)
```

## Program 8: Check Subsequence

A string A is a subsequence of string B if all characters of A appear in B in the same order, not necessarily consecutively.

```python
def is_subsequence(a, b):

    i = 0

    for char in b:

        if i < len(a) and a[i] == char:
            i += 1

    return i == len(a)


print(is_subsequence("ace", "abcde"))
```

## Program 9: Find Longest Word

```python
text = "Python programming is powerful"

words = text.split()

longest = max(words, key=len)

print(longest)
```

## Program 10: Compress a String

Example:

```text
Input: aaabbcccc

Output: a3b2c4
```

```python
def compress(text):

    if not text:
        return ""

    result = []
    count = 1

    for i in range(1, len(text)):

        if text[i] == text[i - 1]:
            count += 1

        else:
            result.append(text[i - 1] + str(count))
            count = 1

    result.append(text[-1] + str(count))

    return "".join(result)


print(compress("aaabbcccc"))
```

## Program 11: Check Isomorphic Strings

Two strings are isomorphic if each character in the first string consistently maps to one character in the second string, and vice versa.

```python
def is_isomorphic(s, t):

    if len(s) != len(t):
        return False

    map_st = {}
    map_ts = {}

    for a, b in zip(s, t):

        if a in map_st and map_st[a] != b:
            return False

        if b in map_ts and map_ts[b] != a:
            return False

        map_st[a] = b
        map_ts[b] = a

    return True


print(is_isomorphic("egg", "add"))
```

## Program 12: Longest Palindromic Substring

```python
def longest_palindrome(text):

    if not text:
        return ""

    result = ""

    for i in range(len(text)):

        for left, right in [(i, i), (i, i + 1)]:

            while (
                left >= 0
                and right < len(text)
                and text[left] == text[right]
            ):

                if right - left + 1 > len(result):
                    result = text[left:right + 1]

                left -= 1
                right += 1

    return result


print(longest_palindrome("babad"))
```

Time Complexity:

$$
O(n^2)
$$

Space Complexity:

$$
O(n)
$$

---

# 13. TIME AND SPACE COMPLEXITY

Complexity analysis is important for DSA interviews.

| Operation | Time Complexity |
|---|---|
| len(s) | O(1) |
| s[i] | O(1) |
| s + t | O(n + m) |
| s[a:b] | O(k) |
| s.find(t) | O(n × m) worst case |
| s.count(t) | O(n × m) worst case |
| s.replace() | O(n + output size) |
| s.split() | O(n) approximately |
| s.lower() | O(n) |
| s.upper() | O(n) |
| s[::-1] | O(n) |
| sorted(s) | O(n log n) |
| Dictionary lookup | O(1) average |
| Set lookup | O(1) average |

Here:

- n = Length of first string.
- m = Length of second string.
- k = Length of resulting substring.

Important algorithms:

| Algorithm | Time Complexity |
|---|---|
| Two Pointers | O(n) |
| Frequency Counting | O(n) |
| Anagram using sorting | O(n log n) |
| Anagram using hashing | O(n) average |
| Naive Pattern Searching | O(n × m) |
| KMP | O(n + m) |
| Sliding Window | O(n) for standard implementations |
| Longest Palindrome by Expansion | O(n²) |

---

# 14. COMMON MISTAKES

1. Forgetting that indexing starts from zero.
2. Using an invalid index.
3. Forgetting that the ending index in slicing is excluded.
4. Trying to modify a string directly.
5. Confusing `find()` and `index()`.
6. Forgetting that `input()` returns a string.
7. Ignoring uppercase and lowercase differences.
8. Forgetting spaces when checking palindromes.
9. Using sorting unnecessarily when frequency counting is sufficient.
10. Using nested loops when a dictionary or set can solve the problem.
11. Forgetting empty-string edge cases.
12. Not checking whether two strings have equal lengths before checking anagrams.
13. Using repeated string concatenation inside large loops.
14. Forgetting to handle duplicate characters.
15. Not considering Unicode characters.

---


# 17. IMPORTANT EDGE CASES

Whenever solving a string problem, test these cases:

| Test Case | Example |
|---|---|
| Empty string | `""` |
| Single character | `"a"` |
| All same characters | `"aaaa"` |
| All unique characters | `"abcd"` |
| Uppercase | `"PYTHON"` |
| Lowercase | `"python"` |
| Mixed case | `"PyThOn"` |
| Spaces | `"hello world"` |
| Numbers | `"12345"` |
| Special characters | `"@#$%"` |
| Unicode | `"café"` |
| Repeated pattern | `"ababab"` |

A good programmer always considers edge cases before submitting code.

---

# 19. IMPORTANT DIFFERENCES — QUICK REVISION

| Concept | Meaning |
|---|---|
| String | Sequence of characters |
| Character | Individual symbol |
| Index | Position of character |
| Slice | Part of a string |
| Substring | Contiguous sequence |
| Subsequence | Ordered, not necessarily contiguous |
| Palindrome | Same forward and backward |
| Anagram | Same character frequencies |
| Frequency | Number of occurrences |
| Hashing | Efficient data lookup |
| Two Pointers | Two moving indices |
| Sliding Window | Moving range |
| KMP | Efficient pattern matching |
| LPS | Longest Proper Prefix Suffix |

---
