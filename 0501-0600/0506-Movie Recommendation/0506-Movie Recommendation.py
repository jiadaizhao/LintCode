import collections
class Solution:
    def minMalwareSpread(self, graph):
        mt = collections.defaultdict(list)
        for i, movies in enumerate(graph):
            for m in movies:
                mt[m].append(i)

        result = []
        for i, movies in enumerate(graph):
            recommend = collections.Counter()
            for m in movies:
                for user in mt[m]:
                    if user == i:
                        continue
                    for nm in graph[user]:
                        if nm not in graph[i]:
                            recommend[nm] += 1
            if len(recommend) > 0:
                result.append(list(list(zip(*sorted(recommend.items(), key = lambda x: (-x[1], x[0]))[:5]))[0]))
            else:
                result.append([])

        return result
