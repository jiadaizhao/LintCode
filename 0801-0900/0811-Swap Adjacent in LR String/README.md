# 811. Swap Adjacent in LR String

Difficulty: Medium

https://www.lintcode.com/problem/swap-adjacent-in-lr-string/description

**Description**  
In a string composed of 'L', 'R', and 'X' characters, like "RXXLRXRXL", a move consists of either replacing one occurrence of "XL" with "LX", or replacing one occurrence of "RX" with "XR". Given the starting string start and the ending string end, return True if and only if there exists a sequence of moves to transform one string to the other.

* 1 <= len(start) = len(end) <= 10000.
* Both start and end will only consist of characters in {'L', 'R', 'X'}.

**Example 1:**
```
Input: start = `"RXXLRXRXL"`, end = `"XRLXXRRLX"`, 
Output: true
Explanation:
We can transform start to end following these steps:
RXXLRXRXL ->
XRXLRXRXL ->
XRLXRXRXL ->
XRLXXRRXL ->
XRLXXRRLX
```

**Example 2:**
```
Input:start = "X", end = "L"
Ouput: false  
```
