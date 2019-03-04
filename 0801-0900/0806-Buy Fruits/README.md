# 806. Buy Fruits

Difficulty: Medium

http://www.lintcode.com/en/problem/buy-fruits/

Xiao Ming is going to help companies buy fruit. Give a codeList, which is loaded with the fruit he bought. Give a shoppingCart, which is loaded with target fruit. We need to check if the order in the codeList matches the order in the shoppingCart. Note that only the sum of the items in all linked lists in the codeList add up to less than or equal to the sum of items in the shoppingcart may return 1. In addition, the item in codeList may be "anything", which can match with any fruit.

**Notice**  
* The number of fruits in codeList and the number of fruits in shppingCart are both less than 2000.

**Example**  
Given codeList = [["apple", "apple"],["orange", "banana", "orange"]],, shoppingCart = ["orange", "apple", "apple", "orange", "banana", "orange"], return 1.
```
Explanation:
Because the order in the codeList matches the fruit in the shoppingCart except for the first orange.
```
Given codeList = [["orange", "banana", "orange"],["apple", "apple"]], shoppingCart = ["orange", "apple", "apple", "orange", "banana", "orange"], return 0.
```
Explanation:
Because the order in the codeList doesn't match the shoppingCart.
```
Given codeList = [["apple", "apple"],["orange", "anything", "orange"]], shoppingCart = ["orange", "apple", "apple", "orange", "mango", "orange"], return 1.
```
Explanation:
anything matches mango, so codeList can match the fruit of shoppingCart.
```
