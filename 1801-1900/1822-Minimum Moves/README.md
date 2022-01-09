# 1822. Minimum Moves

Difficulty: Easy

https://www.lintcode.com/problem/minimum-moves/description

**Description**  
Given a string S consisting of N letters 'a' and / or 'b'. In one move, you can swap one letter for the other ('a' for 'b' or 'b' for 'a'). You should return the minimum number of moves required to obtain a string containing no instances of three identical consecutive letters.

* N is an integer within the range: [0, 2000000]
* string S consists only of the characters 'a' and/or 'b'

**Example 1:**
```
Input:
S = "baaaaa"
Output: 1
Explanation: The string S without three identical consecutive letters which can be obtained in one move is "baabaa".
```

**Example 2:**
```
Input:
S = "baaabbaabbba"
Output: 2
Explanation: There are four valid strings obtainable in two moves: for example: "bbaabbaabbaa"
```

**Example 3**
```
Input:
S="baabab"
Output: 0
```
