# 935. Cartesian Product

Difficulty: Medium

http://www.lintcode.com/en/problem/cartesian-product/

We use a two-dimensional array setList[][] to represent a collection array, and each element in setList[i] is an integer and is not the same. Find the cartesian product of setList[0],setList[1],...,setList[setList.length - 1].
In general, the Cartesian product of the collection A and the set B is A×B = {(x,y)|x∈A∧y∈B}。

**Notice**  
* 1 <= setList.length <= 5
* 1 <= setList[i].length <= 5

**Example**  
Given setList = [[1,2,3],[4],[5,6]], return [[1,4,5],[1,4,6],[2,4,5],[2,4,6],[3,4,5],[3,4,6]],
```
Explanation:
The cartesian product of [1,2,3], [4] and [5,6] is [[1,4,5],[1,4,6],[2,4,5],[2,4,6],[3,4,5],[3,4,6]].
```
Given setList = [[1,2,3],[4]] , return [[1,4],[2,4],[3,4]]。
```
Explanation:
The cartesian product of [1,2,3] and [4] is [[1,4],[2,4],[3,4]].
```
