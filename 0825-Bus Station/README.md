# 825. Bus Station

Difficulty: Hard

http://www.lintcode.com/en/problem/bus-station/

There are a city's N bus information, route[i] stores the bus stop through which the i-th bus passes, find the minimum number of transfers from station A to station B. If you can't get to station B from station A, return -1.

**Notice**  
* 1 <= N <= 100, 2 <= |route[i]| <= 100, 0 <= route[i][j] <= 2^31 - 1
* A and B two stations must exist and they are different

**Example**  
Given N = 2, route = [[1, 2, 3, 4], [3, 5, 6, 7]], A = 1, B = 4, return 1.
```
Explanation:
We only need to take the bus No.0, you can get to Station 3 from Station 0.
```
Given N = 2, route = [[1, 2, 3, 4], [3, 5, 6, 7]], A = 1, B = 7, return 2.
```
Explanation:
We need to take bus No.0 from station 0 and then take bus No.1 to station 6 at station 2.
```
