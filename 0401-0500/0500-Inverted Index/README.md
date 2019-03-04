# 500. Inverted Index

Difficulty: Easy

http://lintcode.com/en/problem/inverted-index/

Create an inverted index with given documents.

**Notice**  

Ensure that data does not include punctuation.

**Example**  
Given a list of documents with id and content. (class Document)
```
[
  {
    "id": 1,
    "content": "This is the content of document 1 it is very short"
  },
  {
    "id": 2,
    "content": "This is the content of document 2 it is very long bilabial bilabial heheh hahaha ..."
  },
]
```
Return an inverted index (HashMap with key is the word and value is a list of document ids).
```
{
   "This": [1, 2],
   "is": [1, 2],
   ...
}
```
