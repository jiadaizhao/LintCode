# 833. Process Sequence

Difficulty: Medium

http://lintcode.com/en/problem/process-sequence/

There is a process sequence that contains the start and end of each process. There is a query sequence asking how many processes are running at a certain point in time. Please return the query result of the query sequence.

**Notice**  
* 1 <= logs[i].start,logs[i].end,queries[i] <= 2^32 - 1
* 1 <= |logs|,|queries| <= 10^5

**Example**  
Given logs = [[1, 1234], [2, 1234]], queries = [2], return [2].
```
Explanation:
There are 2 processes running at time 2.
```
Given logs = [[1, 1234], [2, 1234]], queries = [1, 1235], return [1, 0].
```
Explanation:
There is a process running at time 1, and 0 processes running at time 1235.
```
