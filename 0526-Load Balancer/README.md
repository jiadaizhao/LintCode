# 526. Load Balancer

Difficulty: Medium

http://lintcode.com/en/problem/load-balancer/

Implement a load balancer for web servers. It provide the following functionality:

1. Add a new server to the cluster => add(server_id).
2. Remove a bad server from the cluster => remove(server_id).
3. Pick a server in the cluster randomly with equal probability => pick().

**Example**  
At beginning, the cluster is empty => {}.
```
add(1)
add(2)
add(3)
pick()
>> 1         // the return value is random, it can be either 1, 2, or 3.
pick()
>> 2
pick()
>> 1
pick()
>> 3
remove(1)
pick()
>> 2
pick()
>> 3
pick()
>> 3
```
