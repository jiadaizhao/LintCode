# 784. The Longest Common Prefix II

Difficulty: Easy

http://lintcode.com/en/problem/the-longest-common-prefix-ii/

Given n strings and a target string, output the maximum length of the longest common prefix of the target string with the given n strings.

**Notice**  
The sum of the length of n strings is sum, 1 <= sum <= 50000. The length of each string is greater than 0(i.e. there is no empty string).

**Example**  
Give ["abcba","acc","abwsf"]，target = "abse",return 2.
```
Explanation:
The longest common prefix of “abse” and “abcba” is “ab”, and the length is 2. The longest common prefix of “abse” and “acc” is “a”, and the length is 1. The longest common prefix of “abse” and “abwsf” is “ab”, and the length is 2. max(2,1,2) = 2.
```
Give ["aaa","bbb","aabb"]，target = "aaab",return 3.
```
Explanation:
The longest common prefix of “aaab” and “aaa” is “aaa”, and the length is 3. The longest common prefix of “aaab” and "bbb" is "", and the length is 0. The longest common prefix of “aaab” and “aabb” is “aa”, and the length is 2. max(3,0,2) = 3. 
```