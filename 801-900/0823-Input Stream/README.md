# 823. Input Stream

Difficulty: Medium

http://www.lintcode.com/en/problem/input-stream/

Give two input stream inputA and inputB, which have Backspace. If the final result of the two input streams is equal, output YES, otherwise output NO.

**Notice**  
* Input characters include only lowercase letters and '<'
* The length of input stream does not exceed 10000.

**Example**  
Given inputA = “abcde<<”, inputB = “abcd<e<”, return "YES".
```
Explanation:
The final result of inputA and inputB is abc, so return "YES".
```
Given inputA = “a<<bc”, inputB = “abc<”, return "NO"
```
Explanation:
The final result of inputA is "bc", and the final result of inputB is "ab", so return "NO".
```
