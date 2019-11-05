import collections
class Solution:
    """
    @param strings: a string array
    @return: return a list of string array
    """
    def groupStrings(self, strings):
        # write your code here
        table = collections.defaultdict(list)
        for s in strings:
            temp = ['a']
            diff = ord(s[0]) - ord('a')
            for c in s[1:]:
                curr = ord(c) - diff
                if curr < ord('a'):
                    curr += 26
                temp.append(chr(curr))
            table[''.join(temp)].append(s)
            
        return list(table.values())
