class Solution:
    """
    @param target: the target
    @param position: the initial position
    @param speed: the speed
    @return: How many car fleets will arrive at the destination
    """
    def carFleet(self, target, position, speed):
        # Write your code here
        time = [(target - p)/s for p, s in sorted(zip(position, speed))]
        count = curr = 0
        for t in time[::-1]:
            if t > curr:
                count += 1
                curr = t
        
        return count
