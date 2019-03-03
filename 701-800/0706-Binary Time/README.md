# 706. Binary Time

Difficulty: Medium

http://www.lintcode.com/en/problem/binary-time/

Given a watch with a binary display time and a non-negative integer n which represents the number of 1s on a given timetable, return all possible time.

**Notice**  
* The order of output does not matter.
* The hour must not contain a leading zero, for example "01:00" is not valid, it should be "1:00".
* The minute must be consist of two digits and may contain a leading zero, for example "10:2" is not valid, it should be "10:02".

**Example**  
Given n = 1
Return ["1:00", "2:00", "4:00", "8:00", "0:01", "0:02", "0:04", "0:08", "0:16", "0:32"]
