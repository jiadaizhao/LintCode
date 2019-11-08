# 1280. Data Stream as Disjoint Intervals

Difficulty: Hard

https://www.lintcode.com/problem/data-stream-as-disjoint-intervals/description

**Description**  
Given a data stream input of non-negative integers a1, a2, ..., an, ..., summarize the numbers seen so far as a list of disjoint intervals.

For example, suppose the integers from the data stream are 1, 3, 7, 2, 6, ..., then the summary will be:
```
[1, 1]
[1, 1], [3, 3]
[1, 1], [3, 3], [7, 7]
[1, 3], [7, 7]
[1, 3], [6, 7]
```

**Example 1:**
```
Input：["SummaryRanges","addNum","getIntervals","addNum","getIntervals","addNum","getIntervals","addNum","getIntervals","addNum","getIntervals"],[[],[1],[],[3],[],[7],[],[2],[],[6],[]]
Output：[null,null,[[1,1]],null,[[1,1],[3,3]],null,[[1,1],[3,3],[7,7]],null,[[1,3],[7,7]],null,[[1,3],[6,7]]]
Explanation：add(1)->get([[1, 1]])->add(3)->get([[1, 1], [3, 3]])->add(7)->get([[1, 1], [3, 3], [7, 7]])->add(2)-merge(1,2,3)->get([[1, 3], [7, 7]])->add(6)->merge(6,7)->get([[1, 3], [6, 7]])
```

**Example 2:**
```
Input：["SummaryRanges","addNum","getIntervals","addNum","getIntervals"],[[],[4],[],[3],[]]
Output：[null,null,[4,4],null,[3,4]]
Explanation：add(4)->get([[4, 4]])->add(3)->merge(3,4)->get([[3, 4]])
```
