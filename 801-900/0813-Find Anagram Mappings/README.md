# 813. Find Anagram Mappings

Difficulty: Easy

http://lintcode.com/en/problem/find-anagram-mappings/

Given two lists A and B, and B is an anagram of A. B is an anagram of A means B is made by randomizing the order of the elements in A.

We want to find an index mapping P, from A to B. A mapping P[i] = j means the ith element in A appears in B at index j.

These lists A and B may contain duplicates. If there are multiple answers, output any of them.

https://leetcode.com/problems/find-anagram-mappings/description/

**Notice**  
* A, B have equal lengths in range [1, 100].
* A[i], B[i] are integers in range [0, 10^5].

**Example**  
Given A = [12, 28, 46, 32, 50] and B = [50, 12, 32, 46, 28], return [1, 4, 3, 2, 0].
```
Explanation:
as P[0] = 1 because the 0th element of A appears at B[1], and P[1] = 4 because the 1st element of A appears at B[4], and so on.
```
