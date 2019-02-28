# 1393. Friends Of Appropriate Ages

Difficulty: Medium

https://www.lintcode.com/problem/friends-of-appropriate-ages/description

**Description**  
Some people will make friend requests. The list of their ages is given and ages[i] is the age of the ith person.

Person A will NOT friend request person B (B != A) if any of the following conditions are true:

* age[B] <= 0.5 * age[A] + 7
* age[B] > age[A]
* age[B] > 100 && age[A] < 100
Otherwise, A will friend request B.

Note that if A requests B, B does not necessarily request A. Also, people will not friend request themselves.

How many total friend requests are made?

* 1 <= ages.length <= 20000.
* 1 <= ages[i] <= 120.

**Example**  
```
Input: [16,16]
Output: 2
Explanation: 2 people friend request each other.

Input: [16,17,18]
Output: 2
Explanation: Friend requests are made 17 -> 16, 18 -> 17.

Input: [20,30,100,110,120]
Output: 3
Explanation: Friend requests are made 110 -> 100, 120 -> 110, 120 -> 100.
```
