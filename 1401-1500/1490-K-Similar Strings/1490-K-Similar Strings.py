import collections
class Solution:
    """
    @param A: a string
    @param B: a string
    @return: the smallest K for which A and B are K-similar
    """
    def kSimilarity(self, A, B):
        # Write your code here
        if A == B:
            return 0
        Q = collections.deque([A])
        visited = set([A])
        count = 0
        while Q:
            count += 1
            qs = len(Q)
            for _ in range(qs):
                s = Q.popleft()
                i = 0
                while s[i] == B[i]:
                    i += 1
                for j in range(i + 1, len(B)):
                    if s[i] == B[j] and s[j] != B[j]:
                        C = s[:i] + s[j] + s[i+1: j] + s[i] + s[j+1:]
                        if C == B:
                            return count
                        if C not in visited:
                            Q.append(C)
                            visited.add(C)
        return -1
