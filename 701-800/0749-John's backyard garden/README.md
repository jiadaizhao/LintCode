# 749. John's backyard garden

Difficulty: Easy

http://www.lintcode.com/en/problem/johns-backyard-garden/

John wants to build a back garden on the empty space behind his home. There are two kinds of bricks now, one is 3 dm high and the other is 7 dm high. John wants to enclose a high x dm wall. If John can do this, output YES, otherwise NO.

**Notice**  
X is an integer, and it's range is [3, 1000].

**Example**  
Give x = 10,return YES.
```
Explanation:
x = 3 + 7:That is, you need one batch of 3 dm height bricks and one batch of 7 dm height bricks.
```
Give x = 5,return NO.
```
Explanation:
John can not enclose a high 5 dm wall with 3 dm height bricks and 7 dm height bricks.
```
Give x = 13,return YES.
```
Explanation:
x = 2 * 3 + 7:That is, you need two batch of 3 dm height bricks and one batch of 7 dm height bricks.
```
