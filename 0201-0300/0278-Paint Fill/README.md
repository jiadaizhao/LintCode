# 278. Paint Fill

Difficulty: Easy

https://www.lintcode.com/problem/paint-fill/description

**Description**  
Implement the "paint fill" function that one might see on many image editing programs. That is, given a screen (represented by a two-dimensional array of colors), a point, and a new color, fill in the surrounding area until the color changes from the original color.
```
The type of color is an integer point in the interval [1, 5]
The surrounding area refers to the up, down, left and right
```

**Example 1:**
```
Input: screen = [[2,2,5], [1,3,3]], x = 1, y = 1, newColor = 4
Output: true
Explanation: 
The new color of the position of the given point is not the same as the old color
```

**Example 2:**
```
Input: screen = [[5,4,1],[4,2,4]], x = 0, y = 2, newColor = 1
Output: false
Explanation: 
The new color of the position of the given point is the same as the old color
```
