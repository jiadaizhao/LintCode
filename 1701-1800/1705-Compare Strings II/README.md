# 1705. Compare Strings II

Difficulty: Easy

https://www.lintcode.com/problem/compare-strings-ii/description

**Description**  
One string is strictly smaller than another when the frequency of occurrence of the smallest character in the string is less than the frequency of occurrence of the smallest character in the comparison string.

For example,string "abcd" is smaller than string "aaa" because the smallest character (in lexicographical order) in "abcd" is 'a', with a frequency of 1, and the smallest character in "aaa" is also 'a',but with a frequency of 3. In another example, string "a" is smaller than string "bb" beacuse the smallest character in "a" is 'a' with a frequency of 1, and the smallest character in "bb" is 'b' with a frequency of 2.

Write a function that, given string A (which contains N strings delimited by ','), returns an array C of N integers. For 0 <= J < N, values of C[J] specify the number of strings in A which are strictly smaller than the comparison J-th string in B (starting from 0).

* 1 <= N, M <= 10000
* 1 <= length of any string contained by A or B <= 10
* All the input strings comprise only lowercase English alphabet letters (a - z)

**Example 1:**
```
Input: 
A = "abcd,aabc,bd"
B = "aaa,aa"
Output: [3, 2]	
Explanation: All the strings in the array are strictly smaller than "aaa" on the basis of the given comparison cirteria;
Strings "abcd" and "bd" are strictly smaller than "aa".
```
