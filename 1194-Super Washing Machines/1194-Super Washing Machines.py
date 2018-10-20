class Solution:
    """
    @param machines: an integer array representing the number of dresses in each washing machine from left to right on the line
    @return: the minimum number of moves to make all the washing machines have the same number of dresses
    """
    def findMinMoves(self, machines):
        # Write your code here
        total = sum(machines)
        if total % len(machines):
            return -1
        avg = total // len(machines)
        curr = count = 0 
        for m in machines:
            diff = m - avg
            curr += diff
            count = max(count, abs(curr), diff)
        return count
