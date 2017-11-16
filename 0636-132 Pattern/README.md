# 636. 132 Pattern

Difficulty: Medium

http://www.lintcode.com/en/problem/132-pattern/

Given a sequence of n integers a1, a2, ..., an, a 132 pattern is a subsequence ai, aj, ak such that i < j < k and ai < ak < aj. Design an algorithm that takes a list of n numbers as input and checks whether there is a 132 pattern in the list.

n will be less than 20,000.

**Example**  
Given nums = [1, 2, 3, 4]
return False // There is no 132 pattern in the sequence.

Given nums = [3, 1, 4, 2]
return True // There is a 132 pattern in the sequence: [1, 4, 2].
