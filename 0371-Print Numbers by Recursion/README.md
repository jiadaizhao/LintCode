# 371. Print Numbers by Recursion

Difficulty: Medium

http://lintcode.com/en/problem/print-numbers-by-recursion/

Print numbers from 1 to the largest number with N digits by recursion.

**Notice**  

It's pretty easy to do recursion like:
```
recursion(i) {
    if i > largest number:
        return
    results.add(i)
    recursion(i + 1)
}
```
however this cost a lot of recursion memory as the recursion depth maybe very large. Can you do it in another way to recursive with at most N depth?

**Example**  
Given N = 1, return [1,2,3,4,5,6,7,8,9].

Given N = 2, return [1,2,3,4,5,6,7,8,9,10,11,12,...,99].
