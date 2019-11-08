class Solution:
    """
    @param cars:  integer array of length denoting the parking slots where cars are parked
    @param k: integer denoting the number of cars that have to be covered by the roof
    @return: return the minium length of the roof that would cover k cars
    """
    def ParkingDilemma(self, cars, k):
        # write your code here
        cars.sort()
        minLen = cars[-1] - cars[0] + 1
        for i in range(len(cars) - k + 1):
            minLen = min(minLen, cars[i + k - 1] - cars[i] + 1)
        
        return minLen
