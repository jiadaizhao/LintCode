/**
 * Definition of Interval:
 * classs Interval {
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 */

class SegmentTree {
public:
    int start, end, min;
    SegmentTree *left, *right;
    SegmentTree(int start, int end, int min) {
        this->start = start;
        this->end = end;
        this->min = min;
        this->left = this->right = NULL;
    }
};
 
class Solution { 
public:
    /**
     *@param A, queries: Given an integer array and an query list
     *@return: The result list
     */
    vector<int> intervalMinNumber(vector<int> &A, vector<Interval> &queries) {
        // write your code here
        SegmentTree* root = build(0, A.size() - 1, A);
        vector<int> result;
        for (Interval q : queries)
        {
            result.push_back(query(root, q.start, q.end));
        }
        
        return result;
    }
    
private:
    SegmentTree* build(int start, int end, vector<int> &A) {
        if (start > end)
        {
            return nullptr;
        }
        SegmentTree* root = new SegmentTree(start, end, A[start]);
        if (start != end)
        {
            int mid = start + (end - start) / 2;
            root->left = build(start, mid, A);
            root->right = build(mid + 1, end, A);
            root->min = min(root->left->min, root->right->min);
        }
        return root;
    }
    
    int query(SegmentTree *root, int start, int end) {
        if (root->start == start && root->end == end)
        {
            return root->min;
        }
        
        int mid = root->start + (root->end - root->start) / 2;
        int result = INT_MAX;
        if (start <= mid)
        {
            result = min(result, query(root->left, start, min(mid, end)));
        }
        
        if (end > mid)
        {
            result = min(result, query(root->right, max(start, mid + 1), end));
        }
        
        return result;
    }
};
