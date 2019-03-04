# 132. Word Search II

Difficulty: Hard

http://lintcode.com/en/problem/word-search-ii/

Given a matrix of lower alphabets and a dictionary. Find all words in the dictionary that can be found in the matrix. A word can start from any position in the matrix and go left/right/up/down to the adjacent position.

**Example**  
Given matrix:
```
doaf
agai
dcan
```
and dictionary:
```
{"dog", "dad", "dgdg", "can", "again"}
```
return {"dog", "dad", "can", "again"}

dog:
```
doaf
agai
dcan
```
dad:
```
doaf
agai
dcan
```
can:
```
doaf
agai
dcan
```
again:
```
doaf
agai
dcan
```
