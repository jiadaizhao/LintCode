# 1614. Highest growth stock

Difficulty: Easy

https://www.lintcode.com/problem/highest-growth-stock/description

**Description**  
Give a list of stock IDs, initial prices and last prices, output the stock with the highest growth rate, return the ID(If the growth rates of some stocks are the same, return the first one in the list)

**Example**  
Example1
```
Input: stock = [["a01","13.22","15.33"],["a02","13.22","14.22"]]
Output: "a01"
Explanation: 
The growth rate of "a01" is 0.1596
The growth rate of "a02" is 0.0756
```
Example2
```
Input: stock = [["a01","13.22","15.33"],["a02","13.22","15.33"]]
Output: "a01"
Explanation: 
The growth rate of "a01" and "a02" are the same, output "a01"
```
