class Solution:
    """
    @param S: a string
    @return: a list of integers representing the size of these parts
    """
    def partitionLabels(self, S):
        # Write your code here
        last = {c : i for i, c in enumerate(S)}
        result = []
        start = j = 0
        for i, c in enumerate(S):
            j = max(j, last[c])
            if j == i:
                result.append(i - start + 1)
                start = i + 1
        return result
