# 1594. Fair Candy Swap

Difficulty: Easy

https://www.lintcode.com/problem/fair-candy-swap/description

**Description**  
Alice and Bob have candy bars of different sizes: A[i] is the size of the i-th bar of candy that Alice has, and B[j] is the size of thej-th bar of candy that Bob has.

Since they are friends, they would like to exchange one candy bar each so that after the exchange, they both have the same total amount of candy. (The total amount of candy a person has is the sum of the sizes of candy bars they have.)

Return an integer array ans where ans[0] is the size of the candy bar that Alice must exchange, and ans[1] is the size of the candy bar that Bob must exchange.

If there are multiple answers, you may return any one of them. It is guaranteed an answer exists.

* 1 <= A.length <= 10000
* 1 <= B.length <= 10000
* 1 <= A[i] <= 100000
* 1 <= B[i] <= 100000
* It is guaranteed that Alice and Bob have different total amounts of candy.
* It is guaranteed there exists an answer.

**Example 1:**
```
Input: A = [1,1], B = [2,2]
Output: [1,2]
Explanation: 
A and B can only reach the same total number of candies by exchanging [1, 2]
```

**Example 2:**
```
Input: A = [2], B = [1,3]
Output: [2,3]
Explanation: 
A and B can only reach the same total number of candies by exchanging [2, 3]
```
