import collections
class Solution:
    """
    @param emails: Original email
    @return: Return the count of groups which has more than one email address in it.
    """
    def countGroups(self, emails):
        # Write your code here
        table = collections.Counter()
        for email in emails:
            local, domain = email.split('@')
            local = ''.join(local.split('+')[0].split('.'))
            table[local + '@' + domain] += 1
        return sum(v > 1 for v in table.values())
