# 953. The Biggest Score On The Tree

Difficulty: Medium

http://www.lintcode.com/en/problem/the-biggest-score-on-the-tree/

Given a multitree of n nodes, and the node numbered from 0 to n - 1, and the root numbered 0. Each node has a revenue, you can add the revenue of this node when you get to it. Each side has a cost, we will subtract the cost of this side when walking along it. Find the maximum total (total score = total return - total cost) score from the root node to any leaf node.

**Notice**  
* x[i], y[i] represent two nodes on the ith edge, cost[i] represent the cost of ith edge, profit[i] represent the revenue of node numbered i.
* 1 <= x[i], y[i] <= 10^5
* 1 <= cost[i], profit[i] <= 100

**Example**  
Given x = [0,0,0],y = [1,2,3], cost = [1,1,1], profit = [1,1,2,3]，return 3.
```
Route: 0→3
```
Given x = [0,0],y = [1,2], cost =[1,2], profit = [1,2,5]，return 4.
```
Route: 0→2
```
