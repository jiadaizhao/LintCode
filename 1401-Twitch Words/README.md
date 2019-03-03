# 1401. Twitch Words

Difficulty: Easy

https://www.lintcode.com/problem/twitch-words/description

**Description**  
A normal word never contains two or more consecutive letters. We call a substring is a twitch if three or more letters in the word are consecutive. Now given a word and output the start points and the end points of all the twitch from left to right.

* The input string length is n, n <= 100000.

**Example**  
Example1
```
Input: str = "whaaaaatttsup"
Output: [[2,6],[7,9]]
Explanation: 
"aaaa" and "ttt" are twitching letters, and output their starting and ending points.
```
Example2
```
Input: str = "whaaaaatttsup"
Output: [[2,6],[7,9]]
Explanation: 
"ooo", "sss" and "ssss" are twitching letters, and output their starting and ending points.
```
