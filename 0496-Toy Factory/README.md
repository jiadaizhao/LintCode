# 496. Toy Factory

Difficulty: Easy

http://lintcode.com/en/problem/toy-factory/

Factory is a design pattern in common usage. Please implement a ToyFactory which can generate proper toy based on the given type.

**Example**  
```
ToyFactory tf = ToyFactory();
Toy toy = tf.getToy('Dog');
toy.talk(); 
>> Wow

toy = tf.getToy('Cat');
toy.talk();
>> Meow
```