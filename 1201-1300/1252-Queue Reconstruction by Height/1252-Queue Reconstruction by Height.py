class Solution:
    """
    @param people: a random list of people
    @return: the queue that be reconstructed
    """
    def reconstructQueue(self, people):
        # write your code here
        people.sort(key=lambda p:(-p[0], p[1]))
        result = []
        for p in people:
            result.insert(p[1], p)
        return result
