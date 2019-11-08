import itertools
class Solution:
    def ambiguousCoordinates(self, S):
        def parse(frag):
            for i in range(1, len(frag) + 1):
                p1 = frag[:i]
                p2 = frag[i:]
                if (len(p1) == 1 or not p1.startswith('0')) and not p2.endswith('0'):
                    yield p1 + ('.' if len(p2) > 0 else '') + p2
                    
        return ['({0}, {1})'.format(*cand)
                for i in range(2, len(S) - 1)
                for cand in itertools.product(parse(S[1:i]), parse(S[i:-1]))]
