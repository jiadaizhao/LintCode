class Solution:
    """
    @param S: personal information string S
    @return: the correct "mask" 
    """
    def maskingPersonalInformation(self, S):
        # Write your code here.
        at = S.find('@')
        if (at == -1):
            d = ''.join(c for c in S if c.isdigit())
            return ['', '+*-', '+**-', '+***-'][len(d) - 10] + '***-***-' + d[-4:]
        else:
            return (S[0] + '*****' + S[at-1:]).lower()
