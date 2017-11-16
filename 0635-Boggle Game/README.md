# 635. Boggle Game

Difficulty: Hard

http://www.lintcode.com/en/problem/boggle-game/

Given a board which is a 2D matrix includes a-z and dictionary dict, find the largest collection of words on the board, the words can not overlap in the same position. return the size of largest collection.

**Notice**  

* The words in the dictionary are not repeated.
* You can reuse the words in the dictionary.

**Example**  
Give a board below
```
[['a', 'b', 'c'],
 ['d', 'e', 'f'],
 ['g', 'h', 'i']]
```
dict = ["abc", "cfi", "beh", "defi", "gh"]
Return 3 // we can get the largest collection["abc", "defi", "gh"]
