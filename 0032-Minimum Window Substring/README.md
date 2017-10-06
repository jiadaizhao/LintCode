# 32. Minimum Window Substring

Difficulty: Medium

http://www.lintcode.com/en/problem/minimum-window-substring/

Given a string source and a string target, find the minimum window in source which will contain all the characters in target.

**Notice**  
If there is no such window in source that covers all characters in target, return the emtpy string "".

If there are multiple such windows, you are guaranteed that there will always be only one unique minimum window in source.

If all elements in nums are smaller than k, then return nums.length

**Clarification**  
Should the characters in minimum window has the same order in target?

* Not necessary.

**Example**  
For source = "ADOBECODEBANC", target = "ABC", the minimum window is "BANC"
