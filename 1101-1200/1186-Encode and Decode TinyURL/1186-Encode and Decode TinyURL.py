import random
class Solution:
    def __init__(self):
        self.seed = '0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ'
        self.table = {}

        
    def getKey(self):
        return ''.join(random.choice(self.seed) for _ in range(6))

    
    def encode(self, longUrl):
        # Encodes a URL to a shortened URL.
        while True:
            key = self.getKey()
            if key not in self.table:
                break
                
        self.table[key] = longUrl
        return key


    def decode(self, shortUrl):
        # Decodes a shortened URL to its original URL.
        return self.table[shortUrl]


# Your Codec object will be instantiated and called as such:
# Codec codec = new Codec();
# codec.decode(codec.encode(url));
