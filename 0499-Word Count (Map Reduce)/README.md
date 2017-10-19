# 499. Word Count (Map Reduce)

Difficulty: Easy

http://lintcode.com/en/problem/word-count-map-reduce/

Using map reduce to count word frequency.

https://hadoop.apache.org/docs/r1.2.1/mapred_tutorial.html#Example%3A+WordCount+v1.0

**Example**  
```
chunk1: "Google Bye GoodBye Hadoop code"
chunk2: "lintcode code Bye"


Get MapReduce result:
    Bye: 2
    GoodBye: 1
    Google: 1
    Hadoop: 1
    code: 2
    lintcode: 1
```
