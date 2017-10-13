/**
 * Definition of SegmentTreeNode:
 * class SegmentTreeNode {
 * public:
 *     int start, end, count;
 *     SegmentTreeNode *left, *right;
 *     SegmentTreeNode(int start, int end, int count) {
 *         this->start = start;
 *         this->end = end;
 *         this->count = count;
 *         this->left = this->right = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     *@param root, start, end: The root of segment tree and 
     *                         an segment / interval
     *@return: The count number in the interval [start, end] 
     */
    int query(SegmentTreeNode *root, int start, int end) {
        // write your code here
        if (start > end || root == nullptr)
        {
            return 0;
        }
        if (root->start >= start && root->end <= end)
        {
            return root->count;
        }
        
        int mid = root->start + (root->end - root->start) / 2;
        int count = 0;
        if (start <= mid)
        {
            count += query(root->left, start, min(mid, end));
        }
        if (end > mid)
        {
            count += query(root->right, max(mid + 1, start), end);
        }
        
        return count;
    }
};
