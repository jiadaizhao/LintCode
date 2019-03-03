# 1378. Minimum String Array Coverage

Difficulty: Medium

https://lintcode.com/problem/minimum-string-array-coverage/description

**Description**  
Given a string collection tag_list, an array of strings all_tags, find the smallest all_tags sub-array contains all the string in the tag_list, output the length of this sub-array. If there is no return -1.

**Notice**  
* 1 <= |tag_list|,|all_tags| <=10000
* All string length <= 50

**Example**  
Given tag_list = ["made","in","china"], all_tags = ["made", "a","b","c","in", "china","made","b","c","d"], return 3.
```
Explanation:
["in", "china","made"] contains all the strings in tag_list,6 - 4 + 1 = 3.
```
Given tag_list = ["a"], all_tags = ["b"], return -1.
```
Explanation:
Does not exist.
```
