# 1538. Card Game II

Difficulty: Medium

https://www.lintcode.com/problem/card-game-ii/description

**Description**  
You are playing a card game with your friends, there are n cards in total. Each card costs cost[i] and inflicts damage[i] damage to the opponent. You have a total of totalMoney dollars and need to inflict at least totalDamage damage to win. And Each card can only be used once. Determine if you can win the game.

**Example 1:**
```
Input:
cost = [1,2,3,4,5]
damage = [1,2,3,4,5]
totalMoney = 10
totalDamage = 10

Output: true
Explanation: We can use the [1,4,5] to cause 10 damage, which costs 10.
```

**Example 2:**
```
Input:
cost = [1,2]
damage = [3,4]
totalMoney = 10
totalDamage = 10

Output: false
Explanation: We can only cause 7 damage at most.
```
