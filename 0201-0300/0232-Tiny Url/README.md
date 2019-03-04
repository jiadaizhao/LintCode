# 232. Tiny Url

Difficulty: Medium

http://lintcode.com/en/problem/tiny-url/

Given a long url, make it shorter. To make it simpler, let's ignore the domain name.

You should implement two methods:

* longToShort(url). Convert a long url to a short url.
* shortToLong(url). Convert a short url to a long url starts with http://tiny.url/.

You can design any shorten algorithm, the judge only cares about two things:

1. The short key's length should equal to 6 (without domain and slash). And the acceptable characters are [a-zA-Z0-9]. For example: abcD9E
2. No two long urls mapping to the same short url and no two short urls mapping to the same long url.

**Example**  
Given url = http://www.lintcode.com/faq/?id=10, run the following code (or something similar):
```
short_url = longToShort(url) // may return http://tiny.url/abcD9E
long_url = shortToLong(short_url) // return http://www.lintcode.com/faq/?id=10
```
The short_url you return should be unique short url and start with http://tiny.url/ and 6 acceptable characters. For example "http://tiny.url/abcD9E" or something else.

The long_url should be http://www.lintcode.com/faq/?id=10 in this case.