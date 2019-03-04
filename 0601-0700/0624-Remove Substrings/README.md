# 624. Remove Substrings

Difficulty: Medium

http://www.lintcode.com/en/problem/remove-substrings/

Given a string s and a set of n substrings. You are supposed to remove every instance of those n substrings from s so that s is of the minimum length and output this minimum length.

**Example**  
Given s = ccdaabcdbb, substrs = ["ab", "cd"]
Return 2

Explanation: 
ccdaabcdbb -> ccdacdbb -> cabb -> cb (length = 2)
