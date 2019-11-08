import itertools
class Solution:
    """
    @param S: string S
    @param T: string T
    @return: Backspace String Compare
    """
    def backspaceCompare(self, S, T):
        # Write your code here
        def getNext(s):
            b = 0
            for c in reversed(s):
                if c == '#':
                    b += 1
                elif b > 0:
                    b -= 1
                else:
                    yield c
                    
        return all(x == y for x, y in itertools.zip_longest(getNext(S), getNext(T)))
