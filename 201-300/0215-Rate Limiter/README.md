# 215. Rate Limiter

Difficulty: Hard

http://lintcode.com/en/problem/rate-limiter/

Implement a rate limiter, provide one method: is_ratelimited(timestamp, event, rate, increment).

* timestamp: The current timestamp, which is an integer and in second unit.
* event: The string to distinct different event. for example, "login" or "signup".
* rate: The rate of the limit. 1/s (1 time per second), 2/m (2 times per minute), 10/h (10 times per hour), 100/d (100 times per day). The format is [integer]/[s/m/h/d].
* increment: Whether we should increase the counter. (or take this call as a hit of the given event)
The method should return true or false to indicate the event is limited or not.

**Example**  
``` 
is_ratelimited(1, "login", "3/m", true), return false.
is_ratelimited(11, "login", "3/m", true), return false.
is_ratelimited(21, "login", "3/m", true), return false.
is_ratelimited(30, "login", "3/m", true), return true.
is_ratelimited(65, "login", "3/m", true), return false.
is_ratelimited(300, "login", "3/m", true), return false.
```
