class Solution:
    """
    @param people: The i-th person has weight people[i].
    @param limit: Each boat can carry a maximum weight of limit.
    @return: Return the minimum number of boats to carry every given person. 
    """
    def numRescueBoats(self, people, limit):
        # Write your code here.
        people.sort()
        total = start = 0
        end = len(people) - 1
        while start <= end:
            total += 1
            if people[start] + people[end] <= limit:
                start += 1
            end -= 1
            
        return total
