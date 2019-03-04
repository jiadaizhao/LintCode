# 514. Paint Fence

Difficulty: Easy

http://lintcode.com/en/problem/paint-fence/

There is a fence with n posts, each post can be painted with one of the k colors.
You have to paint all the posts such that no more than two adjacent fence posts have the same color.
Return the total number of ways you can paint the fence.

**Notice**  

n and k are non-negative integers.

**Example**  
Given n=3, k=2 return 6
```
      post 1,   post 2, post 3
way1    0         0       1 
way2    0         1       0
way3    0         1       1
way4    1         0       0
way5    1         0       1
way6    1         1       0
```
