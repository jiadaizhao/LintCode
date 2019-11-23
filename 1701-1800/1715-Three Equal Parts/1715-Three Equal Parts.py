class Solution:
    """
    @param A: an array
    @return: divide the array into 3 non-empty parts
    """
    def threeEqualParts(self, A):
        total = A.count(1)
        if total == 0:
            return [0, 2]
        if total % 3:
            return [-1, -1]
            
        k = total // 3
        count = 0
        for i, a in enumerate(A):
            if a == 1:
                count += 1
                if count == 1:
                    start = i
                elif count == k + 1:
                    mid = i
                elif count == k * 2 + 1:
                    end = i
                    break
                
        while end < len(A) and A[start] == A[mid] == A[end]:
            start += 1
            mid += 1
            end += 1
        if end == len(A):
            return [start - 1, mid]
        else:
            return [-1, -1]
