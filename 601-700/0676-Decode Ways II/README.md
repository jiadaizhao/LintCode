# 676. Decode Ways II

Difficulty: Hard

http://www.lintcode.com/en/problem/decode-ways-ii/

A message containing letters from A-Z is being encoded to numbers using the following mapping way:
```
'A' -> 1
'B' -> 2
...
'Z' -> 26
```
Beyond that, now the encoded string can also contain the character *, which can be treated as one of the numbers from 1 to 9.
Given the encoded message containing digits and the character *, return the total number of ways to decode it.
Also, since the answer may be very large, you should return the output mod 10^9 + 7.

**Notice**  
1. The length of the input string will fit in range [1, 10^5].
2. The input string will only contain the character * and digits 0 - 9.

**Example**  
```
Given s = "*"
return 9 // The encoded message can be decoded to the string: "A", "B", "C", "D", "E", "F", "G", "H", "I".

Given s = "1*"
return 18
```
