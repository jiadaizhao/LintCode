class Solution:
    """
    @param n: a integer
    @param logs: a list of integers
    @return: return a list of integers
    """
    def exclusiveTime(self, n, logs):
        # write your code here
        time = [0] * n
        prev = 0
        St = []
        for log in logs:
            id, start, timestamp = log.split(':')
            id = int(id)
            timestamp = int(timestamp)
            if start == 'start':
                if St:
                    time[St[-1]] += timestamp - prev
                prev = timestamp
                St.append(id)
            else:
                time[id] += timestamp - prev + 1
                prev = timestamp + 1
                St.pop()
        return time
