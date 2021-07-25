class Solution:
    """
    @param a: 
    @param b: 
    @param c: 
    @param d: 
    @return: return "Yes" or "No"
    """
    def IsPossible(self, a, b, c, d):
        # write your code here
        while a <= c and b <= d:
            if c < d:
                if a == c:
                    return 'Yes' if (d - b) % a == 0 else 'No'
                else:
                    d %= c
            else:
                if b == d:
                    return 'Yes' if (c - a) % b == 0 else 'No'
                else:
                    c %= d
        return 'No'
