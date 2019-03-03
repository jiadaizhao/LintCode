# 1623. Minimal Distance In The Array

Difficulty: Easy

https://www.lintcode.com/problem/minimal-distance-in-the-array/description

**Description**  
Given two integer arrays a and b,please find the number in a with the minimal distance between corresponding value in b (the distance between two numbers means the absolute value of two numbers), if there are several numbers in a have same distance between b[i],just output the smallest number.
Finally, you should output an array of length b.length to represent the answer.

1<=a.length,b.length<=100000

**Example**  
Example1
```
Input: a = [5,1,2,3], b = [2,4,2]
Output: [2,3,2]
Explanation: 
b[0]=2,2 is the number who has the minimal distance to 2
b[1]=4,3 and 5 have the same distance to 4,output 3 because 3 is smaller
b[2]=2,as well as b[0]
```
Example2
```
Input: a = [5,3,1,-1,6], b = [4,8,1,1]
Output: [3,6,1,1]
Explanation: 
b[0]=4, 3 and 5 have the same distance to 4,output 3 because 3 is smaller
b[1]=8, 6 is the number who has the minimal distance to 8
b[2]=1, 1 is the number who has the minimal distance to 1
```
