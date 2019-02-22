# 1253. Convert a Number to Hexadecimal

Difficulty: Easy

https://www.lintcode.com/problem/convert-a-number-to-hexadecimal/description

**Description**  
Given an integer, write an algorithm to convert it to hexadecimal. For negative integer, two’s complement method is used.

1. All letters in hexadecimal (a-f) must be in lowercase.
2. The hexadecimal string must not contain extra leading 0s. If the number is zero, it is represented by a single zero character '0'; otherwise, the first character in the hexadecimal string will not be the zero character.
3. The given number is guaranteed to fit within the range of a 32-bit signed integer.
4. You must not use any method provided by the library which converts/formats the number to hex directly.

**Example**  
Example 1:
```
Input：26
Output："1a"
```
Example 2:
```
Input：-1
Output："ffffffff"
```
