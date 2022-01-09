# 1833. pen box

Difficulty: Medium

https://www.lintcode.com/problem/pen-box/description

**Description**  
Given you an array boxes and a target. Boxes[i] means that there are boxes[i] pens in the ith box. Subarray [i, j] is valid if sum(boxes[i] + boxes[i+1] + ... + boxes[j]) == target. Please find two not overlapped valid subarrays and let the total length of the two subarrays minimum. Return the minimum length. If you can not find such two subarrays, return -1.

boxes.length <= 10 ^ 6 and boxes[i] > 0
​​
**Example 1:**
```
input:boxes = [1,2,2,1,1,1], target = 3

output:4
```
