# 518. Super Ugly Number

Difficulty: Medium

http://lintcode.com/en/problem/super-ugly-number/

Write a program to find the nth super ugly number.

Super ugly numbers are positive numbers whose all prime factors are in the given prime list primes of size k. For example, [1, 2, 4, 7, 8, 13, 14, 16, 19, 26, 28, 32] is the sequence of the first 12 super ugly numbers given primes = [2, 7, 13, 19] of size 4.

**Notice**  

* 1 is a super ugly number for any given primes.
* The given numbers in primes are in ascending order.
* 0 < k ≤ 100, 0 < n ≤ 10^6, 0 < primes[i] < 1000

**Example**  
Given n = 6, primes = [2, 7, 13, 19] return 13
