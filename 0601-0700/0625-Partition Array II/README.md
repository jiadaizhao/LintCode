# 625. Partition Array II

Difficulty: Medium

http://www.lintcode.com/en/problem/partition-array-ii/

Partition an unsorted integer array into three parts:

1. The front part < low
2. The middle part >= low & <= high
3. The tail part > high
Return any of the possible solutions.

**Notice**  

low <= high in all testcases.

**Example**  
Given [4,3,4,1,2,3,1,2], and low = 2 and high = 3.  

Change to [1,1,2,3,2,3,4,4].  

([1,1,2,2,3,3,4,4] is also a correct answer, but [1,2,1,2,3,3,4,4] is not)
