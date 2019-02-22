# 1379. The Longest Scene

Difficulty: Hard

https://lintcode.com/problem/the-longest-scene/description

**Description**  
A string, each character representing a scene. Between two identical characters is considered to be a continuous scene. For example: abcda, you can think of these five characters as the same scene. Or acafghbeb can think of two aca and beb scenes. If there is a coincidence between the scenes, then the scenes are combined. For example, abcab, where abca and bcab are coincident, then the five characters are considered to be the same scene. Give a string to find the longest scene.

**Notice**  
* 1 <= |str| <=1e5
* str contains only lowercase letters

**Example**  
Given str = "abcda", return 5.
```
Explanation:
The longest scene is "abcda".
```
Given str = "abcab", return 5.
```
Explanation:
The longest scene is "abcab".
```
