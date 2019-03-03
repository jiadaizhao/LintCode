# 1048. Set Intersection Size At Least Two

Difficulty: Hard

https://www.lintcode.com/problem/set-intersection-size-at-least-two/description

**Description**  
An integer interval [a, b] (for integers a < b) is a set of all consecutive integers from a to b, including a and b.

Find the minimum size of a set S such that for every integer interval A in intervals, the intersection of S with A has size at least 2

1. intervals will have length in range [1, 3000].
2. intervals[i] will have length 2, representing some integer interval.
3. intervals[i][j] will be an integer in [0, 10^8].

**Example**  
Example 1:
```
Input: intervals = [[1, 3], [1, 4], [2, 5], [3, 5]]
Output: 3
Explanation:
Consider the set S = {2, 3, 4}.  For each interval, there are at least 2 elements from S in the interval.
Also, there isn't a smaller size set that fulfills the above condition.
Thus, we output the size of this set, which is 3.
```
Example 2:
```
Input: intervals = [[1, 2], [2, 3], [2, 4], [4, 5]]
Output: 5
Explanation:
An example of a minimum sized set is {1, 2, 3, 4, 5}.
```
