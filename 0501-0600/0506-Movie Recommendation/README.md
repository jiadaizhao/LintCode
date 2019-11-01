# 506. Movie Recommendation

Difficulty: Easy

https://www.lintcode.com/problem/movie-recommendation/description

**Description**  
Give a user a list of movies he has seen and recommend other movies he may like for each user. Here we specify a simple recommendation algorithm that you need to implement in Map Reduce.
For a user, join the movies A, B, C that he has seen, then we can see which movie collections these people have seen among the people who have seen the movies A, B or C. For these movies, the first five movies with the highest frequency are recommended to the user. The recommended movies need to be sorted according to the degree of correlation

**Example 1:**
```
Input：[[1,2],[1,3,5],[2,5]]
Output：[[5,3],[2],[1,3]]
Explanation：
Analysis of recommended movies for User 1:
- He has seen movies 1 and 2.
- Users who have seen movies 1 or 2 also have users 2 and 3.
- Of the movies that users 2 and 3 have seen, 5 appear twice and 3 once.
- So the movies recommended to user 1 are [5,3], and 5 is in the front, because the correlation is higher.
```

**Example 2:**
```
Input：[[1],[2],[3]]
Output：[[],[],[]]
Explanation：All users watch different movies.
```
