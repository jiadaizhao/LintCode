# 1799. Sequence summation

Difficulty: Easy

https://www.lintcode.com/problem/sequence-summation/description

**Description**  
Xiao Ming was in math class. In the class, the teacher said that it is necessary to ask for the sum of the arithmetic series with the difference of one. This is very simple.
But Xiao Ming thought, if at some point, the equal difference becomes -1, then how to solve the sum?
Can you help him?
Example: The first value is 5, and when the 5 item is 9, the equal difference becomes -1, and the last value is 6, then the sum of the series is 5+6+7+8+9+8+7+6= 56
Input: the value i of the first value, the equal difference becomes -1 at the jth term, and the value k of the last value
Output: the sum of the series

**Example 1:**
```
input：i = 5, j = 9, k = 6
output：56
```

**Example 2:**
```
input：i = 5, j = 5, k = 5
output：5
```
