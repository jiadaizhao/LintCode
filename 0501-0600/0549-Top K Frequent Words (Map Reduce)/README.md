# 549. Top K Frequent Words (Map Reduce)

Difficulty: Medium

http://www.lintcode.com/en/problem/top-k-frequent-words-map-reduce/

Find top k frequent words with map reduce framework.

The mapper's key is the document id, value is the content of the document, words in a document are split by spaces.

For reducer, the output should be at most k key-value pairs, which are the top k words and their frequencies in this reducer. The judge will take care about how to merge different reducers' results to get the global top k frequent words, so you don't need to care about that part.

The k is given in the constructor of TopK class.

**Notice**  
For the words with same frequency, rank them with alphabet.

**Example**  
Given document A =
```
lintcode is the best online judge
I love lintcode
```
and document B =
```
lintcode is an online judge for coding interview
you can test your code online at lintcode
```
The top 2 words and their frequencies should be
```
lintcode, 4
online, 3
```
