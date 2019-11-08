# 1373. Movies on Flight

Difficulty: Medium

https://www.lintcode.com/problem/movies-on-flight/description

**Description**  
You are on a flight and wanna watch two movies during this flight.

You are given List movieDurations which includes all the movie durations.

You are also given the duration of the flight which is d in minutes.

Now, you need to pick two movies and the total duration of the two movies is less than or equal to (d - 30min).

Find the pair of movies with the longest total duration and return their indexes. If multiple found, return the pair with the longest movie.

**Example 1:**
```
Input: movieDurations = [90, 85, 75, 60, 120, 150, 125], d = 250
Output: [0, 6]
Explanation: movieDurations[0] + movieDurations[6] = 90 + 125 = 215 is the maximum number within 220 (250min - 30min)
```
