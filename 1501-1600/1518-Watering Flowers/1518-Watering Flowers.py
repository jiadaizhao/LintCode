class Solution:
    def waterPlants(self, plants, capacity1, capacity2):
        can1 = can2 = left = count = 0
        right = len(plants) - 1
        while left < right:
            if can1 < plants[left]:
                can1 = capacity1
                count += 1
            
            can1 -= plants[left]
            left += 1
                
            if can2 < plants[right]:
                can2 = capacity2
                count += 1
                
            can2 -= plants[right]
            right -= 1
            
        if left == right and plants[left] > can1 + can2:
            return count + 1
        else:
            return count
