# 660. Read N Characters Given Read4 II - Call multiple times

Difficulty: Hard

https://lintcode.com/en/problem/read-n-characters-given-read4-ii-call-multiple-times/

The API: int read4(char *buf) reads 4 characters at a time from a file.

The return value is the actual number of characters read. For example, it returns 3 if there is only 3 characters left in the file.

By using the read4 API, implement the function int read(char *buf, int n) that reads n characters from the file.

**Notice**  
The read function may be called multiple times.

**Example**  
