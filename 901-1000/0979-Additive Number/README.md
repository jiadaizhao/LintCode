# 979. Additive Number

Difficulty: Medium

https://www.lintcode.com/problem/additive-number/description

Additive number is a string whose digits can form additive sequence.

A valid additive sequence should contain at least three numbers. Except for the first two numbers, each subsequent number in the sequence must be the sum of the preceding two.

**Notice**  
Numbers in the additive sequence cannot have leading zeros, so sequence 1, 2, 03 or 1, 02, 3 is invalid.

Given a string containing only digits '0'-'9', write a function to determine if it's an additive number.

**Example**  
"112358" is an additive number because the digits can form an additive sequence: 1, 1, 2, 3, 5, 8.
```
1 + 1 = 2, 1 + 2 = 3, 2 + 3 = 5, 3 + 5 = 8
```
"199100199" is also an additive number, the additive sequence is: 
```
1, 99, 100, 199.

1 + 99 = 100, 99 + 100 = 199
```

**Challenge**  
How would you handle overflow for very large input integers?
