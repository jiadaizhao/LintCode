class Solution:
    """
    @param s: a string
    @param k: an integer
    @return: the number of substrings there are that contain at least k distinct characters
    """
    def kDistinctCharacters(self, s, k):
        # Write your code here
        table = {}
        start = count = total = 0
        for i, c in enumerate(s):
            table[c] = table.get(c, 0) + 1
            if table[c] == 1:
                count += 1
            while count >= k:
                table[s[start]] -= 1
                if table[s[start]] == 0:
                    count -= 1
                start += 1
                
            if count == k - 1:
                total += start
        
        return total
