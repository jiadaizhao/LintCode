# 1492. Koko Eating Bananas

Difficulty: Medium

https://www.lintcode.com/problem/koko-eating-bananas/description

**Description**  
Koko loves to eat bananas. There are N piles of bananas, the i-th pile has piles[i] bananas. The guards have gone and will come back in H hours.

Koko can decide her bananas-per-hour eating speed of K. Each hour, she chooses some pile of bananas, and eats K bananas from that pile. If the pile has less than K bananas, she eats all of them instead, and won't eat any more bananas during this hour.

Koko likes to eat slowly, but still wants to finish eating all the bananas before the guards come back.

Return the minimum integer K such that she can eat all the bananas within H hours.

* 1 <= piles.length <= 10^4
* piles.length <= H <= 10^9
* 1 <= piles[i] <= 10^9

**Example 1:**
```
Input: piles = [3,6,7,11], H = 8
Output: 4
Explanation：6->4*2,7->4*2,11->4*3,3->4*1
```

**Example 2:**
```
Input: piles = [30,11,23,4,20], H = 5
Output: 30
Explanation：4->30*1,11->30*1,20->30*1,23->30*1,30->30*1
```
