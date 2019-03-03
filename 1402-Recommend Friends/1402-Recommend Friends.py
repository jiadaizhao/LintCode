import collections
class Solution:
    """
    @param friends: people's friends
    @param user: the user's id
    @return: the person who most likely to know
    """
    def recommendFriends(self, friends, user):
        # Write your code here
        userFriends = set(friends[user])
        result = -1
        maxcf = 0
        for i in range(len(friends)):
            if i != user and i not in userFriends:
                cfnum = sum(x in userFriends for x in friends[i])
                if cfnum > maxcf:
                    maxcf = cfnum
                    result = i
        return result

class Solution2:
    """
    @param friends: people's friends
    @param user: the user's id
    @return: the person who most likely to know
    """
    def recommendFriends(self, friends, user):
        # Write your code here
        userFriends = set(friends[user])
        result = len(friends)
        maxcf = 0
        table = collections.Counter()
        for f1 in friends[user]:
            for f2 in friends[f1]:
                if f2 != user and f2 not in userFriends:
                    table[f2] += 1
        
        for f, cfnum in table.items():
            if cfnum > maxcf or (cfnum == maxcf and f < result):
                maxcf = cfnum
                result = f
        
        return result if result < len(friends) else -1