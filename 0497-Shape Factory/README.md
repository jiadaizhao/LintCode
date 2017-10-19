# 497. Shape Factory

Difficulty: Easy

http://lintcode.com/en/problem/shape-factory/

Factory is a design pattern in common usage. Implement a ShapeFactory that can generate correct shape.

You can assume that we have only tree different shapes: Triangle, Square and Rectangle.

**Example**  
```
ShapeFactory sf = new ShapeFactory();
Shape shape = sf.getShape("Square");
shape.draw();
>>  ----
>> |    |
>> |    |
>>  ----

shape = sf.getShape("Triangle");
shape.draw();
>>   /\
>>  /  \
>> /____\

shape = sf.getShape("Rectangle");
shape.draw();
>>  ----
>> |    |
>>  ----
```
