# 946. 233 Matrix

Difficulty: Medium

https://lintcode.com/en/problem/233-matrix/

给出一个矩阵A，矩阵的第一行是0,233，2333,23333...(也就是说，A(0,0)=0,A(0,1)=233,A(0,2)=2333,A(0,3)=23333...)，除此之外，A(i,j)=A(i-1,j)+A(i,j-1)，给出一个拥有n个整数的数组X，X[i]表示A(i+1,0)，(也就是说X[0]表示A(1,0),X[1]表示A(2,0)...),以及一个正整数m，求A(n,m)%10000007的值

**Notice**  
* n<=10,m<=10^9  
* 0=<A(i,0)<2^31

**Example**  
```
input:
X=[1]
m=1
output:
234
explanation:
[[0,233],
 [1,234]]
```
```
input:
X=[0,0]
m=2
output:
2799
explanation:
[[0,233,2333],
 [0,233,2566],
 [0,233,2799]]
```
