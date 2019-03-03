# 1633. Strings That Satisfies The Condition

Difficulty: Easy

https://www.lintcode.com/problem/strings-that-satisfies-the-condition/description

**Description**  
Given a string target and a string array s, output all strings containing target(ie target is a subsequence of s[i]) in their original order in the array s

* s.length<=1000
* 1<=the sum of strings’ length in s,target<=100000

**Example**  
Example1
```
Input: target="google",s=["goooogle","abc","google","higoogle","googlg","gowogwle","gogle"]
Output: ["goooogle","google","higoogle","gowogwle"]
Explanation:
goooogle
google
higoogle
gowogwle
```
Example2
```
Input: target="hello",s=["helolo","helo","heello","hhepllo","olleh"]
Output: ["helolo","heello","hhepllo"]
Explanation:

helolo
heello
hhepllo
```
