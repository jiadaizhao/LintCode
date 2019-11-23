class Solution:
    """
    @param names: a string array
    @return: the string array
    """
    def DistinguishUsername(self, names):
        # Write your code here
        result = [''] * len(names)
        table = {}
        for i, name in enumerate(names):
            if name in table:
                result[i] = name + str(table[name])
                table[name] += 1
            else:
                result[i] = name
                table[name] = 1
                
        return result
