# 1634. Secret Word

Difficulty: Medium

https://www.lintcode.com/problem/secret-word/description

**Description**  
Given a secrect word, and an encoding rule as follows: Transform each letter in the secret, different letters can not be changed to the same letter. Such as banana -> xyzyzy, but banana can not become xyyyyy, because there is no way to decode back.
Now input a very long string, and it is required to determine whether a substring exists in the string can be transformed by the above encoding rule. If exists, output string "yes", otherwise output "no".

* The length of the secret word does not exceed 1010.

* The length of the string does not exceed 1000010000.

* The string only consists of lowercase.

**Example**  
```
Give s="abcabcd", word="xyzxyz", return yes

Explaination:
"x" can transfer to "a", "y" can transfer to "b" and "z" can transfer to "c".
Give s="abca", word="xyzd", return no

Explaination:
the word "xyzd" has no way to transfer to "abca"
```
