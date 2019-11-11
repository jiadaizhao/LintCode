# 1485. Holy Grail spell

Difficulty: Easy

https://www.lintcode.com/problem/holy-grail-spell/description

**Description**  
In the world of the Grail, there is a hidden spell. The secret of this spell is the largest one of the uppercase and lowercase letters in English.

Now give you a piece of English. Can you find this letter?

ps:There must be an answer

English length will not exceed 100,000

**Example 1:**
```
Input: "aAbb"
Output: A
Explanation: Because only lowercase b is not capitalized, and a has both uppercase and lowercase, a is the largest letter that satisfies the condition and is the only letter that satisfies the condition.
```

**Example 2:**
```
Input: "aabbBCcDd"
Output: D
Explanation: Because the three letters that satisfy the meaning of the question are 'b', 'c', 'd' where d is the largest, the answer is d
```
