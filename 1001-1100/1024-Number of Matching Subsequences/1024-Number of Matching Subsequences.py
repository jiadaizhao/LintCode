class Solution:
    """
    @param S: a string
    @param words: a dictionary of words
    @return: the number of words[i] that is a subsequence of S
    """
    def numMatchingSubseq(self, S, words):
        # Write your code here
        waiting = collections.defaultdict(list)
        for it in map(iter, words):
            waiting[next(it)].append(it)
        for c in S:
            for it in waiting.pop(c, ()):
                waiting[next(it, None)].append(it)
        return len(waiting[None])
