# 529. Geohash

Difficulty: Medium

http://lintcode.com/en/problem/geohash/

Geohash is a hash function that convert a location coordinate pair into a base32 string.

Check how to generate geohash on wiki: Geohash or just google it for more details.

Try http://geohash.co/.

You task is converting a (latitude, longitude) pair into a geohash string.

**Example**  
Given lat = 39.92816697, lng = 116.38954991 and precision = 12 which indicate how long the hash string should be. You should return wx4g0s8q3jf9.

The precision is between 1 ~ 12.
