class Solution:
    """
    @param dominoes: a string
    @return: a string representing the final state
    """
    def pushDominoes(self, dominoes):
        # Write your code here
        result = list(dominoes)
        last = -1
        for i, d in enumerate(dominoes):
            if d == 'L':
                if last != -1 and dominoes[last] == 'R':
                    j = (last + i) // 2
                    if (i - last) & 1 == 0:
                        result[j] = '.'
                else:
                    j = last
                for k in range(j + 1, i):
                    result[k] = 'L'
                
            if d != '.':
                last = i
            elif last != -1 and dominoes[last] == 'R':
                result[i] = 'R'
        
        return ''.join(result)
