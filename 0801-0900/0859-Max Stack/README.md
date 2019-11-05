# 859. Max Stack

Difficulty: Hard

https://www.lintcode.com/problem/max-stack/description

**Description**  
Design a max stack that supports push, pop, top, peekMax and popMax.

1. push(x) -- Push element x onto stack.
2. pop() -- Remove the element on top of the stack and return it.
3. top() -- Get the element on the top.
4. peekMax() -- Retrieve the maximum element in the stack.
5. popMax() -- Retrieve the maximum element in the stack, and remove it. If you find more than one maximum elements, only remove the top-most one.

1. -1e7 <= x <= 1e7
2. Number of operations won't exceed 10000.
3. The last four operations won't be called when stack is empty.

**Example 1:**
```
Input:
push(5)
push(1)
push(5)
top()
popMax()
top()
peekMax()
pop()
top()
Output:
5
5
1
5
1
5
```
