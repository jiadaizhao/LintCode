# 1564. Interval Search

Difficulty: Easy

https://www.lintcode.com/problem/interval-search/description

**Description**  
Given a List of intervals, the length of each interval is 1000, such as [500,1500], [2100,3100].Give a number arbitrarily and determine if the number belongs to any of the intervals.return True or False.

**Example**  
Example1
```
Input: List = [[100,1100],[1000,2000],[5500,6500]] and number = 6000
Output: true
Explanation: 
6000 is in [5500,6500]
```
Example2
```
Input: List = [[100,1100],[2000,3000]] and number = 3500
Output: false
Explanation: 
3500 is not in any list's interval 
```
