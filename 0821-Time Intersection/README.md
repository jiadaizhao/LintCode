# 821. Time Intersection

Difficulty: Medium

http://www.lintcode.com/en/problem/time-intersection/

Give two users' ordered online time series, and each section records the user's login time point x and offline time point y. Find out the time periods when both users are online at the same time, and output in ascending order.

**Notice**  
* We guarantee that the length of online time series meet 1 <= len <= 1e6.
* For a user's online time series, any two of its sections do not intersect.

**Example**  
Given seqA = [[1,2],[5,100]], seqB = [[1,6]], return [[1,2],[5,6]].
```
Explanation:
In these two time periods [1,2],[5,6], both users are online at the same time.
```
Given seqA = [[1,2],[10,15]], seqB = [[3,5],[7,9]], return [].
```
Explanation:
There is no time period, both users are online at the same time.
```
