# 1402. Recommend Friends

Difficulty: Medium

https://www.lintcode.com/problem/recommend-friends/description

**Description**  
Give n personal friends list, tell you user, find the person that user is most likely to know. (He and the user have the most common friends and he is not a friend of user)

* n <= 500.
* The relationship between friends is mutual. (if B appears on a's buddy list, a will appear on B's friends list).
* Each person's friend relationship does not exceed m, m <= 3000.
* If there are two people who share the same number of friends as user, the smaller number is considered the most likely person to know.
* If user and all strangers have no common friends, return -1.

**Example**  
```
Given list = [[1,2,3],[0,4],[0,4],[0,4],[1,2,3]], user = 0, return 4.

Explanation:
0 and 4 are not friends, and they have 3 common friends. So 4 is the 0 most likely to know.
Given list = [[1,2,3,5],[0,4,5],[0,4,5],[0,5],[1,2],[0,1,2,3]], user = 0, return 4.

Explanation:
Although 5 and 0 have 3 common friends, 4 and 0 only have 2 common friends, but 5 is a 0's friend, so 4 is the 0 most likely to know.
```
