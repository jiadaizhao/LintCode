# 947. Matrix Power Series

Difficulty: Hard

https://www.lintcode.com/problem/matrix-power-series/description

Given a n × n matrix A and a positive integer k and a positive integer m, find the sum S = A + A^2 + A^3 + … + A^k,return the elements of S modulo m

**Notice**  
* n<=30,1<=k<=10^9,1<=m<10^4  
* the range of the element of the Matrix A is [0,10000]

**Example**  
```
input:
A=[[0,1],
   [1,1]]
k=2
m=4
output:
[[1,2],
 [3,4]]
```
