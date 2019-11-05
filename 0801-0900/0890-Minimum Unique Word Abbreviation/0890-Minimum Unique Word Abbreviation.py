class Solution:
    """
    @param target: a target string 
    @param dictionary: a set of strings in a dictionary
    @return: an abbreviation of the target string with the smallest possible length
    """
    def minAbbreviation(self, target, dictionary):
        # Write your code here
        m = len(target)
        maskDic = []
        candidate = 0
        for s in dictionary:
            if len(s) != m:
                continue
            mask = 0
            b = 1
            for i in range(m - 1, -1, -1):
                if s[i] != target[i]:
                    mask |= b
                b <<= 1
            maskDic.append(mask)
            candidate |= mask

        bm = 1 << m
        minLen = m
        minAbbr = (1 << m) - 1

        def dfs(start, mask, currLen):
            nonlocal minLen
            nonlocal minAbbr
            if currLen >= minLen:
                return
            
            if all(mask & dm for dm in maskDic):
                minLen = currLen
                minAbbr = mask
            else:
                b = start
                while b < bm:
                    if candidate & b:
                        if b == start and (b << 1) == bm:
                            nextLen = currLen
                        elif b == start or (b << 1) == bm:
                            nextLen = currLen + 1
                        else:
                            nextLen = currLen + 2
                        dfs(b << 1, mask | b, nextLen)
                    b <<= 1

        dfs(1, 0, 1)
        result = []
        prev = 0
        b = 1 << (m - 1)
        for i in range(m):
            if minAbbr & b:
                if i - prev > 0:
                    result.append(str(i - prev))
                prev = i + 1
                result.append(target[i])
            elif i == m - 1:
                result.append(str(m - prev))
            b >>= 1
        
        return ''.join(result)
