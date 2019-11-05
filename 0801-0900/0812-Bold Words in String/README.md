# 812. Bold Words in String

Difficulty: Easy

https://www.lintcode.com/problem/bold-words-in-string/description

**Description**  
Given a set of keywords words and a string S, make all appearances of all keywords in S bold. Any letters between <b> and </b> tags become bold.
The returned string should use the least number of tags possible, and of course the tags should form a valid combination.

* words has length in range [0, 50].
* words[i] has length in range [1, 10].
* S has length in range [0, 500].
* All characters in words[i] and S are lowercase letters.

**Example 1:**
```
Input:
["ab", "bc"]
"aabcd"
Output:
"a<b>abc</b>d"

Explanation:
Note that returning "a<b>a<b>b</b>c</b>d" would use more tags, so it is incorrect.
```

**Example 2:**
```
Input:
["bcccaeb","b","eedcbda","aeebebebd","ccd","eabbbdcde","deaaea","aea","accebbb","d"]
"ceaaabbbedabbecbcced"
Output:
"ceaaa<b>bbb</b>e<b>d</b>a<b>bb</b>ec<b>b</b>cce<b>d</b>"  
```
