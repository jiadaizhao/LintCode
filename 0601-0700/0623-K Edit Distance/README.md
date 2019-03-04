# 623. K Edit Distance

Difficulty: Hard

http://www.lintcode.com/en/problem/k-edit-distance/

Given a set of strings which just has lower case letters and a target string, output all the strings for each the edit distance with the target no greater than k.

You have the following 3 operations permitted on a word:

* Insert a character
* Delete a character
* Replace a character

**Example**  
Given words = ["abc", "abd", "abcd", "adc"] and target = "ac", k = 1
Return ["abc", "adc"]
