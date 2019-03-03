class Solution:
    """
    @param emails: 
    @return: The number of the different email addresses
    """
    def numUniqueEmails(self, emails):
        # write your code here
        table = set()
        for email in emails:
            local, domain = email.split('@')
            table.add(''.join(local.split('+')[0].split('.')) + '@' + domain)
        return len(table)
