class Solution:
    """
    @param S: a string
    @param indexes: the index array
    @param sources: the source array
    @param targets: the target array
    @return: the string after operation
    """
    def findReplaceString(self, S, indexes, sources, targets):
        # Write your code here.
        sl = list(S)
        for i, source, target in sorted(zip(indexes, sources, targets), reverse=True):
            if S[i:i+len(source)] == source:
                sl[i:i+len(source)] = target
        return ''.join(sl)
