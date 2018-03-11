# 843. Digital Flip

Difficulty: Medium

http://www.lintcode.com/en/problem/digital-flip/

Give you an array of 01. Find the minimum number of flipping steps so that the array meets the following rules:
The back of 1 can be either1 or 0, but0 must be followed by 0.

**Notice**  
* The length of the given array n <= 100000.

**Example**  
Given array = [1,0,0,1,1,1], return 2.
```
Explanation:
Turn two 0s into 1s.
```
Given array = [1,0,1,0,1,0], return 2.
```
Explanation:
Turn the second 1 and the third 1 into 0.
```
