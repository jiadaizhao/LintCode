/**
 * Definition of SegmentTreeNode:
 * class SegmentTreeNode {
 * public:
 *     int start, end, max;
 *     SegmentTreeNode *left, *right;
 *     SegmentTreeNode(int start, int end, int max) {
 *         this->start = start;
 *         this->end = end;
 *         this->max = max;
 *         this->left = this->right = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     *@param root, start, end: The root of segment tree and 
     *                         an segment / interval
     *@return: The maximum number in the interval [start, end]
     */
    int query(SegmentTreeNode *root, int start, int end) {
        // write your code here
        if (root->start == start && root->end == end)
        {
            return root->max;
        }
        
        int mid = root->start + (root->end - root->start) / 2;
        int result = INT_MIN;
        if (start <= mid)
        {
            result = max(result, query(root->left, start, min(mid, end)));
        }
        
        if (end > mid)
        {
            result = max(result, query(root->right, max(start, mid + 1), end));
        }
        
        return result;
    }
};
