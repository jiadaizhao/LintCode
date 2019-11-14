class Solution:
    """
    @param newTime: new time
    @return: maximum time
    """
    def timeMagic(self, newTime):
        nt = list(newTime)
        if nt[0] == '?':
            if '0' <= nt[1] <= '3' or nt[1] == '?':
                nt[0] = '2'
            else:
                nt[0] = '1'
                
        if nt[1] == '?':
            if '0' <= nt[0] <= '1':
                nt[1] = '9'
            else:
                nt[1] = '3'
                
        if nt[3] == '?':
            nt[3] = '5'
            
        if nt[4] == '?':
            nt[4] = '9'
            
        return ''.join(nt)
