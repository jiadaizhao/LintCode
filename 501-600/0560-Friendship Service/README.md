# 560. Friendship Service

Difficulty: Easy

http://www.lintcode.com/en/problem/friendship-service/

Support follow & unfollow, getFollowers, getFollowings.

**Example**  
```
follow(1, 3)
getFollowers(1) // return [3]
getFollowings(3) // return [1]
follow(2, 3)
getFollowings(3) // return [1,2]
unfollow(1, 3)
getFollowings(3) // return [2]
```
