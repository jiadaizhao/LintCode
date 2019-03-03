# 12. Min Stack

Difficulty: Medium

http://www.lintcode.com/en/problem/min-stack/

Implement a stack with min() function, which will return the smallest number in the stack.

It should support push, pop and min operation all in O(1) cost.

Notice: min operation will never be called if there is no number in the stack.

**Example**
```
push(1)
pop()   // return 1
push(2)
push(3)
min()   // return 2
push(1)
min()   // return 1
```