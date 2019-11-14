"""
Definition of TreeNode:
"""
class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None

class Solution:
    def constructFromPrePost(self, pre, post):
        # write your code here
        St = [TreeNode(pre[0])]
        i = 0
        for val in pre[1:]:
            while St[-1].val == post[i]:
                St.pop()
                i += 1
                
            node = TreeNode(val)
            if St[-1].left:
                St[-1].right = node
            else:
                St[-1].left = node
            St.append(node)
            
        return St[0]
