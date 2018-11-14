class Solution:
    """
    @param timeSeries: the Teemo's attacking ascending time series towards Ashe
    @param duration: the poisoning time duration per Teemo's attacking
    @return: the total time that Ashe is in poisoned condition
    """
    def findPoisonedDuration(self, timeSeries, duration):
        # Write your code here
        return sum(min(duration, curr - prev) for prev, curr in zip(timeSeries, timeSeries[1:])) + duration if timeSeries else 0
