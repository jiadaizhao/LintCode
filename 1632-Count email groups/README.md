# 1632. Count email groups

Difficulty: Easy

https://www.lintcode.com/problem/count-email-groups/description

**Description**  
Give you an array of n email addresses.
Find the number of email groups and each group should have more than one email address(the address can be duplicated). If two strings have the same value after being transformed, they are in the same group.

The rules of transforming are as follows:

1. Ignore all the characters '.' before the character '@'.
2. Ignore the substring which starts with the first '+'(included) and ends with the character '@'(exclude).

a email group have at least two same email address(after transforming)

**Example**  
Example1
```
Input: emails = ["abc.bc+c+d@jiuzhang.com", "abcbc+d@jiuzhang.com", "abc.bc.cd@jiuzhang.com"]
Output: 1
Explanation: 
"abc.bc+c+d@jiuzhang.com" transforms to "abcbc@jiuzhang.com"
"abcbc+d@jiuzhang.com" transforms to "abcbc@jiuzhang.com"
"abc.bc.cd@jiuzhang.com" transforms to "abcbccd@jiuzhang.com"
We can see that the first address and the second address are in the same group, and there is no address can transform to the same address as the third one. Therefore, there is only one group which meets the requrements.
```
Example2
```
Input: emails = ["abc.b+c+d@jiuzhang.com", "abcbc+d@jiuzhang.com", "abc.bc.cd@jiuzhang.com"]
Output: 0
Explanation: 
There is no group meet the conditions.
```
