# 876. Split Concatenated Strings

Difficulty: Medium

http://www.lintcode.com/en/problem/split-concatenated-strings/

Given a list of strings, you could concatenate these strings together into a loop, where for each string you could choose to reverse it or not. Among all the possible loops, you need to find the lexicographically biggest string after cutting the loop, which will make the looped string into a regular one.

Specifically, to find the lexicographically biggest string, you need to experience two phases:

1. Concatenate all the strings into a loop, where you can reverse some strings or not and connect them in the same order as given.
2. Cut and make one breakpoint in any place of the loop, which will make the looped string into a regular one starting from the character at the cutpoint. And your job is to find the lexicographically biggest one among all the possible regular strings.

**Note**  
1. The input strings will only contain lowercase letters.
2. The total length of all the strings will not over 1,000.

**Example**  
Given str = ["abc", "xyz"], return "zyxcba"
```
Explanation: 
You can get the looped string "-abcxyz-", "-abczyx-", "-cbaxyz-", "-cbazyx-", 
where '-' represents the looped status. 
The answer string came from the fourth looped one, 
where you could cut from the middle character 'a' and get "zyxcba".
```
