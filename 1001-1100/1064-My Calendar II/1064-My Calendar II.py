class MyCalendarTwo:

    def __init__(self):
        self.books = []
        self.overlaps = []

    def book(self, start, end):
        """
        :type start: int
        :type end: int
        :rtype: bool
        """
        for s, e in self.overlaps:
            if start < e and end > s:
                return False
            
        for s, e in self.books:
            if start < e and end > s:
                self.overlaps.append((max(start, s), min(end, e)))
                
        self.books.append((start, end))
        return True


# Your MyCalendarTwo object will be instantiated and called as such:
# obj = MyCalendarTwo()
# param_1 = obj.book(start,end)