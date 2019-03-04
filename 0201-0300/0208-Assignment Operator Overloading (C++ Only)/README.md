# 208. Assignment Operator Overloading (C++ Only)

Difficulty: Medium

http://lintcode.com/en/problem/assignment-operator-overloading-c-only/

Implement an assignment operator overloading method.

Make sure that:

* The new data can be copied correctly
* The old data can be deleted / free correctly.
* We can assign like A = B = C

**Clarification**  
This problem is for C++ only as Java and Python don't have overloading for assignment operator.

**Example**  
If we assign like A = B, the data in A should be deleted, and A can have a copy of data from B.

If we assign like A = B = C, both A and B should have a copy of data from C.