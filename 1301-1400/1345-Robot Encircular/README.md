# 1345. Robot Encircular

Difficulty: Medium

https://www.lintcode.com/problem/robot-encircular/description

**Description**  
On an infinite plane, a robot initially stands at (0, 0) and faces north. The robot can receive one of three instructions:

* "G": go straight 1 unit;
* "L": turn 90 degrees to the left;
* "R": turn 90 degress to the right.

The robot performs the instructions given in order, and repeats them forever.
Return true if and only if there exists a circle in the plane such that the robot never leaves the circle.

* 1 <= instructions.length <= 100
* instructions[i] is in {'G', 'L', 'R'}

**Example 1:**
```
Input: "GGLRRRGG"
Output: true
Explanation: 
The robot moves from (0,0) to (0,2), turns 180 degrees, and then returns to (0,0).
Repeat these instructions and the robot will cycle through this path。
```

**Example 2:**
```
Input: "GG"
Output: false
Explanation: The robot has been moving north.
```
