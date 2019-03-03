class Solution:
    """
    @param s: The capacity of backpack
    @param v: The value of goods 
    @param c: The capacity of goods
    @return: The answer
    """
    def getMaxValue(self, s, v, c):
        # Write your code here
        n = len(v)
        mid = n // 2
        maxVal = 0
        temp = [0] * (1 << mid)
        for i in range(1 << mid):
            sumc, sumv = 0, 0
            for j in range(mid):
                if i & (1 << j):
                    sumc += c[j]
                    sumv += v[j]
            
            temp[i] = (sumc, sumv)
            if sumc <= s:
                maxVal = max(maxVal, sumv)
                
        temp.sort()
        comb = []
        currMax = 0
        for i in range(1 << mid):
            if temp[i][1] > currMax:
                comb.append(temp[i])
                currMax = temp[i][1]
                
        for i in range(1, 1 << (n - mid)):
            sumc, sumv = 0, 0
            state = (i << mid)
            for j in range(mid, n):
                if state & (1 << j):
                    sumc += c[j]
                    sumv += v[j]
            
            cap = s - sumc
            if cap < 0:
                continue
            
            low = 0
            high = len(comb)
            index = -1
            while low < high:
                mi = (low + high) // 2
                if comb[mi][0] <= cap:
                    low = mi + 1
                    index = mi
                else:
                    high = mi
            if index != -1:
                sumv += comb[index][1]
                
            maxVal = max(maxVal, sumv)
    
        return maxVal
