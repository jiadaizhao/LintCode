# 819. Word Sorting

Difficulty: Medium

http://www.lintcode.com/en/problem/word-sorting/

Give a new alphabet, such as {c,b,a,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z}. Sort the string array according to the new alphabet

**Notice**  
* The length of word does not exceed 100.
* The number of words does not exceed 10000.
* You can assume that the given new alphabet is a 26-character string.
* Only lowercase letters.

**Example**  
Given Alphabet = {c,b,a,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z}, String array = {cab,cba,abc}, return {cba,cab,abc}.
```
Explanation:
According to the new dictionary order, output the sorted result {cba, cab, abc}.
```
Given Alphabet = {z,b,a,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,c}, String array = {bca,czb,za,zba,ade}, return {zba,za,bca,ade,czb}.
```
Explanation:
According to the new dictionary order, output the sorted result {zba,za,bca,ade,czb}.
```
