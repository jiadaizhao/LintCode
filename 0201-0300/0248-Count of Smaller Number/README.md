# 248. Count of Smaller Number

Difficulty: Medium

http://www.lintcode.com/en/problem/count-of-smaller-number/

For an array, we can build a SegmentTree for it, each node Give you an integer array (index from 0 to n-1, where n is the size of this array, value from 0 to 10000) and an query list. For each query, give you an integer, return the number of element in the array that are smaller than the given integer.

**Notice**  
We suggest you finish problem Segment Tree Build and Segment Tree Query II first.

**Example**  
For array [1,2,7,8,5], and queries [1,8,5], return [0,4,2]
