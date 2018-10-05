import  collections
class Solution:
    def pyramidTransition(self, bottom, allowed):
        """
        :type bottom: str
        :type allowed: List[str]
        :rtype: bool
        """
        table = collections.defaultdict(set)
        for A, B, C in allowed:
            table[A, B].add(C)
        
        cache = {}
        def solve(curr):
            if len(curr) == 1:
                return True
            if curr in cache:
                return cache[curr]
            cache[curr] = any(solve(cand) for cand in build(curr, []))
            return cache[curr]
        
        def build(curr, path, start = 0):
            if start + 1 == len(curr):
                yield ''.join(path)
            else:
                for C in table[curr[start], curr[start + 1]]:
                    path.append(C)
                    for result in build(curr, path, start + 1):
                        yield result
                    path.pop()
                
        return solve(bottom)
