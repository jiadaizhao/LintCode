# 959. K Spaced Array Sorting

Difficulty: Medium

http://www.lintcode.com/en/problem/k-spaced-array-sorting/

An array is ordered from small to large every k digits, ie arr[i] <= arr[i + k] <= arr[i + 2 * k] <= .... Sort the array from small to large. We expect you to write an algorithm whose time complexity is O(n * logk).

**Notice**  
* 0 <= arr[i] <= 2^31 - 1
* 1 <= |arr| <= 10^5
* 1 <= k <= 10^5

**Example**  
Given arr = [1,2,3], k = 1, return [1,2,3].
```
Explanation:
The sorted array is [1,2,3].
```
Given arr = [4,0,5,3,10], k = 2, return [0,3,4,5,10].
```
Explanation:
The sorted array is [0,3,4,5,10].
```
