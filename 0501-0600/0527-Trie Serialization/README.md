# 527. Trie Serialization

Difficulty: Hard

http://lintcode.com/en/problem/trie-serialization/

Serialize and deserialize a trie (prefix tree, search on internet for more details).

You can specify your own serialization algorithm, the online judge only cares about whether you can successfully deserialize the output from your own serialize function.

**Notice**  

You don't have to serialize like the test data, you can design your own format.

**Example**  
``` 
str = serialize(old_trie)
>> str can be anything to represent a trie
new_trie = deserialize(str)
>> new_trie should have the same structure and values with old_trie
```
An example of test data: trie tree <a<b<e<>>c<>d<f<>>>>, denote the following structure:
```
     root
      /
     a
   / | \
  b  c  d
 /       \
e         f
```
