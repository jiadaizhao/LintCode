import collections
class Solution:
    """
    @param accounts: List[List[str]]
    @return: return a List[List[str]]
    """
    def accountsMerge(self, accounts):
        # write your code here
        parent = [i for i in range(len(accounts))]
        table = {}
        def findParent(index):
            while (parent[index] != index):
                parent[index] = parent[parent[index]]
                index = parent[index]
            return index
        
        for i, account in enumerate(accounts):
            for email in account[1:]:
                if email not in table:
                    table[email] = i
                else:
                    p1 = findParent(table[email])
                    p2 = findParent(i)
                    if p1 != p2:
                        parent[p1] = p2
        
        result = collections.defaultdict(list)
        for email, i in table.items():
            p = findParent(i)
            result[p].append(email)
        return [[accounts[i][0]] + sorted(emails) for i, emails in result.items()]
