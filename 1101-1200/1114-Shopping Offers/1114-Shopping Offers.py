from functools import reduce
class Solution:
    """
    @param price: List[int]
    @param special: List[List[int]]
    @param needs: List[int]
    @return: return an integer
    """
    def shoppingOffers(self, price, special, needs):
        # write your code here
        key = reduce(lambda x, y : 10 * x + y, needs)
        table = {}
        base = [10 ** (len(price) - 1 - i) for i in range(len(price))]
        def dfs(key):
            if key in table:
                return table[key]
            total = 0
            curr = [key // base[i] % 10 for i in range(len(price))]
            for i in range(len(price)):
                total += curr[i] * price[i]
                
            for s in special:
                nextKey = 0
                avail = True
                for i in range(len(price)):
                    if curr[i] >= s[i]:
                        nextKey = nextKey * 10 + curr[i] - s[i]
                    else:
                        avail = False
                        break
                if avail:
                    total = min(total, s[-1] + dfs(nextKey))
            table[key] = total
            return total
        return dfs(key)
