class Solution:
    """
    @param Spell: The Spell
    @return: nothing
    """
    def holyGrailspell(self, Spell):
        # Write your code here
        table = [0] * 26
        for c in Spell:
            if c.islower():
                table[ord(c) - ord('a')] |= 1
            else:
                table[ord(c) - ord('A')] |= 2
                
        for i in range(25, -1, -1):
            if table[i] == 3:
                return chr(ord('A') + i)
