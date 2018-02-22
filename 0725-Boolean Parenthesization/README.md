# 725. Boolean Parenthesization

Difficulty: Hard

http://www.lintcode.com/en/problem/boolean-parenthesization/

Given a boolean expression with following symbols.
```
Symbols
    'T' ---> true 
    'F' ---> false 
```
And following operators filled between symbols
```
Operators
    &   ---> boolean AND
    |   ---> boolean OR
    ^   ---> boolean XOR 
```
Count the number of ways we can parenthesize the expression so that the value of expression evaluates to true.

Let the input be in form of two arrays one contains the symbols (T and F) in order and other contains operators (&, | and ^}

**Example**
```
Given symbol = ['T', 'F', 'T'], operator = ['^', '&']
return 2
The given expression is "T ^ F & T", it evaluates true, in two ways "((T ^ F) & T)" and "(T ^ (F & T))"

given symbol = ['T', 'F', 'F'], operator = ['^', '|']
return 2
The given expression is "T ^ F | F", it evaluates true, in two ways "( (T ^ F) | F )" and "( T ^ (F | F) )".
```
