class Solution:
    """
    @param num: an integer
    @return: returns true when it is a perfect number and false when it is not
    """
    def checkPerfectNumber(self, num):
        # write your code here
        if num <= 1:
            return False
        sum = 1
        i = 2
        while i * i <= num:
            if num % i == 0:
                sum += i
                if i * i != num:
                    sum += num // i
            i += 1
        return sum == num
