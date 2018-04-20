# 797. Reach a Number 

Difficulty: Easy

http://www.lintcode.com/en/problem/reach-a-number/

You are standing at position 0 on an infinite number line. There is a goal at position target.

On each move, you can either go left or right. During the n-th move (starting from 1), you take n steps.

Return the minimum number of steps required to reach the destination.

**Notice**  
target will be a non-zero integer in the range [-10^9, 10^9].

**Example**  
Example 1:
```
Given target = 3
Return 2
Explanation:
On the first move we step from 0 to 1.
On the second step we step from 1 to 3.
```
Example 2:
```
Given target = 2
Return 3
Explanation:
On the first move we step from 0 to 1.
On the second move we step  from 1 to -1.
On the third move we step from -1 to 2.
```
