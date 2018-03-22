# 867. 4 Keys Keyboard

Difficulty: Medium

http://www.lintcode.com/en/problem/4-keys-keyboard/

Imagine you have a special keyboard with the following keys:

Key 1: (A): Print one 'A' on screen.

Key 2: (Ctrl-A): Select the whole screen.

Key 3: (Ctrl-C): Copy selection to buffer.

Key 4: (Ctrl-V): Print buffer on screen appending it after what has already been printed.

Now, you can only press the keyboard for N times (with the above four keys), find out the maximum numbers of 'A' you can print on screen.

**Notice**  
1. 1 <= N <= 50
2. Answers will be in the range of 32-bit signed integer.

**Example**  
Given N = 3, return 3.
```
Explanation: 
We can at most get 3 A's on screen by pressing following key sequence:
A, A, A
```
Given N = 7, return 9.
```
Explanation: 
We can at most get 9 A's on screen by pressing following key sequence:
A, A, A, Ctrl A, Ctrl C, Ctrl V, Ctrl V
```
