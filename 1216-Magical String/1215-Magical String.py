class Solution:
    """
    @param n: an integer 
    @return: the number of '1's in the first N number in the magical string S
    """
    def magicalString(self, n):
        # write your code here
        if n == 0:
            return 0
        seed = list('122')
        count = 1
        i = 2
        while len(seed) < n:
            num = int(seed[i])
            if seed[-1] == '1':
                seed += ['2'] * num
            else:
                seed += ['1'] * num
                count += (num if len(seed) <= n else 1)
            i += 1
        return count
