# 933. Tuple Multiply

Difficulty: Medium

http://www.lintcode.com/en/problem/tuple-multiply/

Given a string tuple, which represents a series of arrays such as "(1,2,3),(4,5,6),(7,8,9)". Then given a number n, which means that we need to find the product of all the nth element in each array.

**Notice**  
* We guarantee that the absolute value of answer does not exceed 10^18.
* The element of array described by string is in the int range.

**Example**  
Given tuple = "(1,2,3),(4,5,6),(7,8,9)", n = 2, return 80.
```
Explanation:
The second elemnts of each array are 2, 5, 8, so the product is 80. 
```
Given tuple = "(1,2,3),(4,5,6),(7,8,9)", n = 3, return 162.
```
Explanation:
The third elements of each array are 3, 6, 9, so the product is 162.
```
