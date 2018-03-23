# 896. Prime Product

Difficulty: Medium

http://www.lintcode.com/en/problem/prime-product/

Given a non-repeating prime array arr, and each prime number is used at most once, find all the product without duplicate and sort them from small to large.

**Notice**  
* 2 <= |arr| <= 9
* 2 <= arr[i] <= 23

**Example**  
Given arr = [2,3], return [6].
```
Explanation:
2 * 3 = 6.
```
Gven arr = [2,3,5], return [6,10,15,30].
```
Explanation:
2 * 3 = 6, 2 * 5 = 10, 3 * 5 = 15, 2 * 3 *5 = 30。
```
