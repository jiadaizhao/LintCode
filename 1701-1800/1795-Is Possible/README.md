# 1795. Is Possible

Difficulty: Medium

https://www.lintcode.com/problem/is-possible/description

**Description**  
Consider a pair of integers,(a,b).The following operations can be performed on (a,b) in any order,zero or more times:
* (a, b)->(a + b, b)
* (a, b)->(a, a + b)

For example,starting with (1, 4) perform the operation (1 + 4, 4) to get (5, 4) perform the operation (5, 5 + 4) to get (5, 9), and perform the operation (5, 5 + 9) to get (5, 14).

Alternatively,the first operation could be (1, 1 + 4) to get (1, 5) and so on.You need to return a string that denotes whether or not you can convert (a, b) to (c, d) by preforming zero or more of the operations specified above.If it is possible,return the string Yes.Otherwise,return No.

* 1 <= a, b, c, d <= 1000

**Example 1:**
```
Input: a = 1,b = 4, c = 5, d = 14
Output: "Yes"
Explanation:
a = 1 + 4 = 5 == c
b = a + b = 5 +4 = 9
b = a + b = 9 + 5 = 14 == d
```

**Example 2:**
```
Input: a = 1,b = 3, c = 4, d = 14
Output: "No"
Explanation:
a = a + b = 4
b = a + b = 7
b = a + b = 11
b = a + b = 15 != 14 
```
