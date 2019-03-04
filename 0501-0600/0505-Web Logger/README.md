# 505. Web Logger

Difficulty: Medium

http://lintcode.com/en/problem/web-logger/

Implement a web logger, which provide two methods:

1. hit(timestamp), record a hit at given timestamp.
2. get_hit_count_in_last_5_minutes(timestamp), get hit count in last 5 minutes.

the two methods will be called with non-descending timestamp (in sec).

**Example**  
```
hit(1);
hit(2);
get_hit_count_in_last_5_minutes(3);
>> 2
hit(300);
get_hit_count_in_last_5_minutes(300);
>> 3
get_hit_count_in_last_5_minutes(301);
>> 2
```