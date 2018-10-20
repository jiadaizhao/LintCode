import collections
class Solution:
    """
    @param paths: a list of string
    @return: all the groups of duplicate files in the file system in terms of their paths
    """
    def findDuplicate(self, paths):
        # Write your code here
        table = collections.defaultdict(list)
        for path in paths:
            dir, *files = path.split()
            for file in files:
                name, _, content = file.partition('(')
                table[content[:-1]].append(dir + '/' + name)
        return [v for v in table.values() if len(v) > 1]
