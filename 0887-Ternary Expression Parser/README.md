# 887. Ternary Expression Parser

Difficulty: Medium

http://www.lintcode.com/en/problem/ternary-expression-parser/

Given a string representing arbitrarily nested ternary expressions, calculate the result of the expression. You can always assume that the given expression is valid and only consists of digits 0-9, ?, :, T and F (T and F represent True and False respectively).

**Notice**  
1. The length of the given string is ≤ 10000.
2. Each number will contain only one digit.
3. The conditional expressions group right-to-left (as usual in most languages).
4. The condition will always be either T or F. That is, the condition will never be a digit.
5. The result of the expression will always evaluate to either a digit 0-9, T or F.

**Example**  
Given expression = "T?2:3", return "2".
```
Explanation: 
If true, then result is 2; otherwise result is 3.
```
Given expression = "F?1:T?4:5", return "4".
```
Explanation: 
The conditional expressions group right-to-left. Using parenthesis, it is read/evaluated as:

             "(F ? 1 : (T ? 4 : 5))"                   "(F ? 1 : (T ? 4 : 5))"
          -> "(F ? 1 : 4)"                 or       -> "(T ? 4 : 5)"
          -> "4"                                    -> "4"
```
Given expression = "T?T?F:5:3", return "F".
```
Explanation: 
The conditional expressions group right-to-left. Using parenthesis, it is read/evaluated as:

             "(T ? (T ? F : 5) : 3)"                   "(T ? (T ? F : 5) : 3)"
          -> "(T ? F : 3)"                 or       -> "(T ? F : 5)"
          -> "F"                                    -> "F"
```
