import collections
class Solution:
    """
    @param rooms: a list of keys rooms[i]
    @return: can you enter every room
    """
    def canVisitAllRooms(self, rooms):
        # Write your code here
        visited = {0}
        Q = collections.deque([0])
        while Q:
            index = Q.popleft()
            for k in rooms[index]:
                if k not in visited:
                    Q.append(k)
                    visited.add(k)
        
        return len(visited) == len(rooms)
