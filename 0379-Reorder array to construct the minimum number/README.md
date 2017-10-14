# 379. Reorder array to construct the minimum number

Difficulty: Medium

http://lintcode.com/en/problem/reorder-array-to-construct-the-minimum-number/

Construct minimum number by reordering a given non-negative integer array. Arrange them such that they form the minimum number.

**Notice**  

The result may be very large, so you need to return a string instead of an integer.

**Example**  
Given [3, 32, 321], there are 6 possible numbers can be constructed by reordering the array:
```
3+32+321=332321
3+321+32=332132
32+3+321=323321
32+321+3=323213
321+3+32=321332
321+32+3=321323
```
So after reordering, the minimum number is 321323, and return it.
