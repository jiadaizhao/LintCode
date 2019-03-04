# 231. Typeahead

Difficulty: Hard

http://lintcode.com/en/problem/typeahead/

Implement typeahead. Given a string and a dictionary, return all words that contains the string as a substring. The dictionary will give at the initialize method and wont be changed. The method to find all words with given substring would be called multiple times.

**Example**  
Given dictionary = {"Jason Zhang", "James Yu", "Bob Zhang", "Larry Shi"}

search "Zhang", return ["Jason Zhang", "Bob Zhang"].

search "James", return ["James Yu"].
