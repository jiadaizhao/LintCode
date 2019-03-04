# 972. Deliver The Message

Difficulty: Medium

https://lintcode.com/problem/deliver-the-message/description

Given the information of a company's personnel. The time spent by the ith person passing the message is t[i] and the list of subordinates is list[i]. When someone receives a message, he will immediately pass it on to all his subordinates. Person numbered 0 is the CEO. Now that the CEO has posted a message, find how much time it takes for everyone in the company to receive the message?

**Notice**  
* The number of employees is n，n <= 1000.
* Everyone can have multiple subordinates but only one superior.
* Time t[i] <= 10000。
* -1 represent no subordinates.

**Example**  
Given t = [1,2,3], list = [[1,2],[-1],[-1]], return 1.
```
Explanation:
The news was passed from the CEO, and the time passed to No. 1 and No. 2 was 1. At this time, all the people in the company received the news.
```
Given t = [1,2,1,4,5], list = [[1,2],[3,4],[-1],[-1],[-1]], return 3.
```
Explanation:
The message was passed from the CEO. The time passed to the No. 1 and No. 2 characters was 1, the time passed to the No. 3 character was 3, and the message passed through 2 to 4 was faster than passing through 1  so the time which is costed for passing to 4 was 2. Finally at the time of 3, everyone received the news.
```