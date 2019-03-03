# 932. Friends Within Three Jumps

Difficulty: Easy

http://www.lintcode.com/en/problem/friends-within-three-jumps/

Given two array a and b, a[i] and b[i] are friends. And then given two query arrays c and d, find whether c[i] and d[i] are friends within three jumps.(i.e A and B are friends, B and C are friends, so B is a one-jump friend of A and C is a two-jumps friend of A)

**Notice**  
* The length of all arrays do not exceed 1000.
* If there is more than one friend relationship chain, calculate the relationship of least jumps.

**Example**  
Given a = [1,2], b = [2,3], c = [1], d = [3], return [1].
```
Explanation:
1 → 2 → 3 ，3 is a two-jumps friend of 1.
```
Given a = [1,2,3,4], b = [2,3,4,5], c = [1,1], d = [4,5], return [1,0].
```
Explanation:
1 → 2 → 3 → 4 → 5，4 is a three-jumps friend of 1, 5 is a four-jumps friend of 1.
```
