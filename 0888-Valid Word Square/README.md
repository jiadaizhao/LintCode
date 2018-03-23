# 888. Valid Word Square

Difficulty: Easy

http://www.lintcode.com/en/problem/valid-word-square/

Given a sequence of words, check whether it forms a valid word square.

A sequence of words forms a valid word square if the k^th row and column read the exact same string, where 0 ≤ k < max(numRows, numColumns).

**Notice**  
1. The number of words given is at least 1 and does not exceed 500.
2. Word length will be at least 1 and does not exceed 500.
3. Each word contains only lowercase English alphabet a-z.

**Example**  
``` 
Given
[
  "abcd",
  "bnrt",
  "crmy",
  "dtye"
]
return true

Explanation:
The first row and first column both read "abcd".
The second row and second column both read "bnrt".
The third row and third column both read "crmy".
The fourth row and fourth column both read "dtye".

Therefore, it is a valid word square.
```
```
Given
[
  "abcd",
  "bnrt",
  "crm",
  "dt"
]
return true

Explanation:
The first row and first column both read "abcd".
The second row and second column both read "bnrt".
The third row and third column both read "crm".
The fourth row and fourth column both read "dt".

Therefore, it is a valid word square.
```
```
Given
[
  "ball",
  "area",
  "read",
  "lady"
]
return false

Explanation:
The third row reads "read" while the third column reads "lead".

Therefore, it is NOT a valid word square.
```
