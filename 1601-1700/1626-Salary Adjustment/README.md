# 1626. Salary Adjustment

Difficulty: Medium

https://www.lintcode.com/problem/salary-adjustment/description

**Description**  
Given a list of salaries, find the smallest cap which makes the sum of adjusted salary be equal to or larger than the given target. cap is defined as: if the current salary is smaller than cap, then cap is used as the new salary, otherwise keep the original salary

* The length of the list does not exceed 100000100000
* The salaries do not exceed 1000010000

**Example**  
```
Give a=[1,2,3,4],target=13,
return 3.

Explanation:
If cap=3, the list will change into [3,3,3,4].
Give a=[1,2,3,4],target=16,
return 4.

Explanation:
If cap=4, the list will change into [4,4,4,4].
```
