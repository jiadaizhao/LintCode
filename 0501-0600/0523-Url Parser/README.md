# 523. Url Parser

Difficulty: Medium

http://lintcode.com/en/problem/url-parser/

Parse a html page, extract the Urls in it.

Hint: use regex to parse html.

**Example**  
Given the following html page:

<html>
  <body>
    <div>
      <a href="http://www.google.com" class="text-lg">Google</a>
      <a href="http://www.facebook.com" style="display:none">Facebook</a>
    </div>
    <div>
      <a href="https://www.linkedin.com">Linkedin</a>
      <a href = "http://github.io">LintCode</a>
    </div>
  </body>
</html>
You should return the Urls in it:

[
  "http://www.google.com",
  "http://www.facebook.com",
  "https://www.linkedin.com",
  "http://github.io"
]
