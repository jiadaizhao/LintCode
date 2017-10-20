# 502. Mini Cassandra

Difficulty: Medium

http://lintcode.com/en/problem/mini-cassandra/

Cassandra is a NoSQL storage. The structure has two-level keys.

1. Level 1: raw_key. The same as hash_key or shard_key.
2. Level 2: column_key.
3. Level 3: column_value

raw_key is used to hash and can not support range query. let's simplify this to a string.
column_key is sorted and support range query. let's simplify this to integer.
column_value is a string. you can serialize any data into a string and store it in column value.

implement the following methods:

1. insert(raw_key, column_key, column_value)
2. query(raw_key, column_start, column_end) // return a list of entries

**Example**  
```
insert("google", 1, "haha")
query("google", 0, 1)
>> [（1, "haha")]
```
