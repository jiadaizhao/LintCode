class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None


class Solution:
    """
    @param root: root of a tree
    @return: head node of a doubly linked list
    """
    def treeToDoublyList(self, root):
        # Write your code here.
        if root is None:
            return None
        
        St = []
        curr = root
        prev = head = tail = None
        while St or curr:
            if curr:
                St.append(curr)
                curr = curr.left
            else:
                curr = St.pop()
                if head is None:
                    head = curr
                tail = curr
                if prev:
                    prev.right = curr
                curr.left = prev
                prev = curr
                curr = curr.right
                
        head.left = tail
        tail.right = head
        
        return head
