# 790. Parser

Difficulty: Hard

http://www.lintcode.com/en/problem/parser/

Symbol string generator consists of two parts, a set of the start symbol and a set of rules of generation.  
For example:  
Start symbol: ['S'], Rules of generation: ["S → abc", "S → aA", "A → b", "A → c"]  
Then, symbolic string abc can be generated because S → abc.  
Symbolic string ab can be generated because S → aA → ab.  
Symbolic string abc can be generated because S → aA → ac.  
Now, give you a symbolic string generator and a symbolic string, and you need to return True if the symbolic string can be generated, False otherwise

**Notice**  
* You can assume the left side of the generation rule is an uppercase letter, startSymbol is an uppercase letter, symbolString is a lowercase string
* |generator| <= 20, |symbolString| <= 20
* There is no left recursion in generate rule sets. For example, there is no such rule set as ["S → Sb", "S → A", "A → Sb"]

**Example**  
Given generator = ["S → abc", "S → aA", "A → b", "A → c"], startSymbol = S, symbolString = “ac”, return True.
```
explanation:
S -> aA -> ac
```
Given generator = ["S → abcd", "S → A", "A → abc"], startSymbol = S, symbolString = “abc”, return True
```
explanation:
S → A → abc
```
Given generator = ["S → abc", "S → aA", "A → b", "A → c"], startSymbol = S, symbolString = “a”, return False
```
explanation:
S after several steps cannot get a
```
Given generator = ["S → abcd", "S → A", "A → abc"], startSymbol = S, symbolString = “ab”, return True
```
explanation:
S after several steps cannot get ab
```
