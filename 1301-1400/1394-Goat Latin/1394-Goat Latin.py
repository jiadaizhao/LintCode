class Solution:
    """
    @param S: 
    @return: nothing
    """
    def  toGoatLatin(self, S):
        def convert(word):
            if word[0] not in 'aeiouAEIOU':
                word = word[1:] + word[0]
            return word + 'ma'
            
        return ' '.join(convert(word) + 'a'*i for i, word in enumerate(S.split(), 1))
