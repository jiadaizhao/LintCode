# 956. Data Segmentation

Difficulty: Easy

http://www.lintcode.com/en/problem/data-segmentation/

Given a string str, we need to extract the symbols and words of the string in order.

**Notice**  
* The length of str does not exceed 10000.
* The given str contains only lowercase letters, symbols, and spaces.

**Example**  
Given str = "(hi (i am)bye)"，return ["(","hi","(","i","am",")","bye",")"].
```
Explanation:
Separate symbols and words.
```
Given str = "#ok yes"，return ["#","ok","yes"]。
```
Explanation:
Separate symbols and words.
```
Given str = "##s"，return ["#","#","s"]。
```
Explanation:
Separate symbols and words.
```