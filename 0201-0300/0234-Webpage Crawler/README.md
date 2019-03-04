# 234. Webpage Crawler

Difficulty: Hard

http://lintcode.com/en/problem/webpage-crawler/

Implement a webpage Crawler to crawl webpages of http://www.wikipedia.org/. To simplify the question, let's use url instead of the the webpage content.

Your crawler should:

1. Call HtmlHelper.parseUrls(url) to get all urls from a webpage of given url.
2. Only crawl the webpage of wikipedia.
3. Do not crawl the same webpage twice.
4. Start from the homepage of wikipedia: http://www.wikipedia.org/

**Notice**  
* You need do it with multithreading.
* You can use up to 3 threads

**Example**  
Given
```
"http://www.wikipedia.org/": ["http://www.wikipedia.org/help/"]
"http://www.wikipedia.org/help/": []
```
Return ["http://www.wikipedia.org/", "http://www.wikipedia.org/help/"]

Given:
```
"http://www.wikipedia.org/": ["http://www.wikipedia.org/help/"]
"http://www.wikipedia.org/help/": ["http://www.wikipedia.org/", "http://www.wikipedia.org/about/"]
"http://www.wikipedia.org/about/": ["http://www.google.com/"]
```
Return ["http://www.wikipedia.org/", "http://www.wikipedia.org/help/", "http://www.wikipedia.org/about/"]
