# 885. Encode String with Shortest Length

Difficulty: Hard

https://lintcode.com/en/problem/encode-string-with-shortest-length/

Given a non-empty string, encode the string such that its encoded length is the shortest.

The encoding rule is: k[encoded_string], where the encoded_string inside the square brackets is being repeated exactly k times.

**Notice**  
1. k will be a positive integer and encoded string will not be empty or have extra space.
2. You may assume that the input string contains only lowercase English letters. The string's length is at most 160.
3. If an encoding process does not make the string shorter, then do not encode it. If there are several solutions, return any of them is fine.

**Example**  
Given s = "aaa", return "aaa".
```
Explanation: 
There is no way to encode it such that it is shorter than the input string, so we do not encode it.
```
Given s = "aaaaa", return "5[a]".
```
Explanation: 
"5[a]" is shorter than "aaaaa" by 1 character.
```
Given s = "aaaaaaaaaa", return "10[a]".
```
Explanation: 
"a9[a]" or "9[a]a" are also valid solutions, both of them have the same length = 5, which is the same as "10[a]".
```
Given s = "aabcaabcd", return "2[aabc]d".
```
Explanation: 
"aabc" occurs twice, so one answer can be "2[aabc]d".
```
Given s = "abbbabbbcabbbabbbc", return "2[2[abbb]c]".
```
Explanation: 
"abbbabbbc" occurs twice, but "abbbabbbc" can also be encoded to "2[abbb]c", so one answer can be "2[2[abbb]c]".
```
