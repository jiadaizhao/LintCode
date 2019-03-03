class Solution {
public:
    class SegmentTreeNode {
    public:
        int start, end, count;
        SegmentTreeNode *left, *right;
        SegmentTreeNode(int start, int end, int count) {
            this->start = start;
            this->end = end;
            this->count = count;
            this->left = this->right = NULL;
        }
    };

    SegmentTreeNode* build(int start, int end) {
        if (start > end)
        {
            return nullptr;
        }

        SegmentTreeNode* root = new SegmentTreeNode(start, end, 0);
        if (start != end)
        {
            int mid = start + (end - start) / 2;
            root->left = build(start, mid);
            root->right = build(mid + 1, end);
        }

        return root;
    }

    void modify(SegmentTreeNode* root, int index, int value) {
        if (root->start == index && root->end == index)
        {
            root->count += value;
            return;
        }

        int mid = root->start + (root->end - root->start) / 2;
        if (index >= root->start && index <= mid)
        {
            modify(root->left, index, value);
        }
        else if (index > mid && index <= root->end)
        {
            modify(root->right, index, value);
        }

        root->count = root->left->count + root->right->count;
    }

    int query(SegmentTreeNode* root, int start, int end) {
        if (start > end || root == nullptr)
        {
            return 0;
        }

        if (start <= root->start && end >= root->end)
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

   /**
     * @param A: An integer array
     * @return: Count the number of element before this element 'ai' is 
     *          smaller than it and return count number array
     */
    vector<int> countOfSmallerNumberII(vector<int> &A) {
        // write your code here
        int maxValue = 0;
        int minValue = INT_MAX;
        for (int i : A)
        {
            maxValue = max(maxValue, i);
            minValue = min(minValue, i);
        }

        SegmentTreeNode* root = build(minValue, maxValue);
        vector<int> result;
        for (int i : A)
        {
            modify(root, i, 1);
            result.push_back(query(root, minValue, i - 1));
        }
        
        return result;
    }
};
