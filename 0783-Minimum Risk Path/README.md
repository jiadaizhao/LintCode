# 783. Minimum Risk Path

Difficulty: Hard

http://www.lintcode.com/en/problem/minimum-risk-path/

There are m undirected edges on the map, Each edge (x, y, w) represents the weight of position x to position y is w. There may be multiple paths from position 0 to position n. We define the risk value of a path as the maximum weight of all the edges in this path.  
What is the smallest risk value in all paths from position 0 to position n?

**Notice**  
* 1 <= m <= 500，1 <= n <= 50，0 <= x, y <= n，1 <= w <= 100000.
* Problem guarantee position 0 must lead to position n.
* The map does not contain heavy edges.

**Example**  
Give n = 2, m = 2, x = [0, 1], y = [1, 2], w = [1, 2], return 2.
```
Explanation:
Path1: 0→1→ 2 (risk value: 2)
The minimum risk value is 2.
```
Give n = 3, m = 4, x = [0, 0, 1, 2], y = [1, 2, 3, 3], w = [1, 2, 3, 4], return 3.
```
Explanation:
Path1: 0→1→ 3 (risk value: 3)
Path2: 0→2→ 3 (risk value: 4)
The minimum risk value is 3.
```
Give n = 4, m = 5, x = [0, 1, 1, 2, 3], y = [1, 2, 3, 4, 4], w = [3, 2, 4, 2, 1], return 3.
```
Explanation:
Path1: 0→1→ 2 → 4 (risk value: 3)
Path2: 0→1→ 3 → 4 (risk value: 4)
The minimum risk value is 3.
```
Give n = 5, m = 7, x = [0, 0, 1, 2, 3, 3, 4], y = [1, 2, 3, 4, 4, 5, 5], w = [2, 5, 3, 4, 3, 4, 1], return 3.
```
Explanation:
Path1: 0→1→ 3 → 5 (risk value: 4)
Path2: 0→1→ 3 → 4 → 5 (risk value: 3)
Path3: 0→2→ 4 → 3 → 5 (risk value: 5)
Path4: 0→2→ 4 → 5 (risk value: 5)
The minimum risk value is 3.
```
