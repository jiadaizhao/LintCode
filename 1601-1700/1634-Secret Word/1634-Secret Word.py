class Solution:
    """
    @param s: the long string
    @param word: the secrect word
    @return: whether a substring exists in the string can be transformed by the above encoding rule
    """
    def getAns(self, s, word):
        # Write a code here
        def possible(s, word):
            table = {}
            used = set()
            for a, b in zip(s, word):
                if a in table:
                    if table[a] != b:
                        return False
                elif b in used:
                    return False
                else:
                    table[a] = b
                    used.add(b)
            return True
        
        return "yes" if any(possible(s[i:i+len(word)], word) for i in range(len(s) - len(word) + 1)) else 'no'
