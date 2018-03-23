# 895. Friend Request

Difficulty: Easy

http://www.lintcode.com/en/problem/friend-request/

Given an array Ages of length n, where the first i elements represent the age of the individual i. Find total number of friend requests sent by this n person. There are some requirements:
1. if Age(B) <= (1/2)Age(A) + 7, A will not send a request to B.
2. if Age(B) > Age(A), A will not send a request to B.
3. if Age(B) < 100 and Age(A) > 100, A will not send a request to B.
4. If it does not satisfy 1,2,3, then A will send a request to B

**Notice**  
* Ages.length <= 1000。
* Everyone's age is greater than 0, less than 150。

**Example**  
Given Ages = [10,39,50], return 1.
```
Explanation:
Only people of age 50 will send friend requests to people of age 39.
```
Given Ages = [101,79,102], return 1.
```
Explanation:
Only people of age 102 will send friend requests to people of age 101.
```
