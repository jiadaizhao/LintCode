# 1519. Time magic

Difficulty: Easy

https://www.lintcode.com/problem/time-magic/description

**Description**  
In Hogwarts School of Magic, there is a simple time magic that converts the current time to the maximum time, but only a few fixed positions. The longest time is 23:59 and the shortest time is 00:00. The format of the time is hh:mm
For example: now is "2?:2?", then the maximum time that can be converted is "23:29"

**Example 1:**
```
Input:  "?4:5?"
Output: "14:59"
Explanation: Return maximum time.
```

**Example 2:**
```
Input:  "0?:??"
Output: "09:59"
Explanation: Return maximum time.
```
