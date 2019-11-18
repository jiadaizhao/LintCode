# 1669. Build a temple

Difficulty: Medium

https://www.lintcode.com/problem/build-a-temple/description

**Description**  
You are an architect who is going to build a temple.
The pillars of the temple are made of wood. Each pillar must be a piece of complete wood and must not be spliced.
There are n segments wood with different length. Your temple has exact m pillars which have the same height and must be an integer. What's the Maximum Height of your temple。（The height of m pillars.）

* 1<=n<=100000
* 1<=m<=100000

**Example 1:**
```
Input：m = 3, [2, 3, 4]
Output：2 
Explanation：Choose wood of length 2 and wood of length 4 is divided into two sections of wood of length 2.
```

**Example 2:**
```
Input：m = 3, [2, 10]
Output：3
Explanation：Wood of length 10 is divided into three pieces of wood of length 3 and one piece of wood of length 1.
```
