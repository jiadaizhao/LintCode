# 818. Subset With Target

Difficulty: Hard

http://www.lintcode.com/en/problem/subset-with-target/

Give an array and a target. We need to find the number of subsets which meet the following conditions:
The sum of the minimum value and the maximum value in the subset is less than the target.

**Notice**  
* The length of the given array does not exceed 50.
* target <= 100000.

**Example**  
Give array = [1,5,2,4,3], target = 4, return 2.
```
Explanation:
Only subset [1],[1,2] satisfy the condition, so the answer is 2.
```
Give array = [1,5,2,4,3],target = 5, return 5.
```
Explanation:
Only subset [1],[2],[1,3],[1,2],[1,2,3] satisfy the condition, so the answer is 5.
```
