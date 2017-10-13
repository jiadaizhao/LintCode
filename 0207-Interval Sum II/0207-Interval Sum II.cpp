class Solution {
public:
    /* you may need to use some attributes here */
    class SegmentTreeNode {
    public:
        int start, end, sum;
        SegmentTreeNode *left, *right;
        SegmentTreeNode(int start, int end, int sum) {
            this->start = start;
            this->end = end;
            this->sum = sum;
            this->left = this->right = NULL;
        }
    };

    /**
     * @param A: An integer vector
     */
    Solution(vector<int> A) {
        // write your code here
        root = build(A, 0, A.size() - 1);
    }
    
    /**
     * @param start, end: Indices
     * @return: The sum from start to end
     */
    long long query(int start, int end) {
        // write your code here
        return query(root, start, end);
    }
    
    /**
     * @param index, value: modify A[index] to value.
     */
    void modify(int index, int value) {
        // write your code here
        modify(root, index, value);
    }
    
private:
    SegmentTreeNode* root;
    SegmentTreeNode* build(vector<int>& A, int start, int end) {
        if (start > end)
        {
            return nullptr;
        }
        
        SegmentTreeNode* root = new SegmentTreeNode(start, end, A[start]);
        if (start != end)
        {
            int mid = start + (end - start) / 2;
            root->left = build(A, start, mid);
            root->right = build(A, mid + 1, end);
            root->sum = root->left->sum + root->right->sum;
        }
        
        return root;
    }
    
    long long query(SegmentTreeNode* root, int start, int end) {
        if (root->start == start && root->end == end)
        {
            return root->sum;
        }
        
        int mid = root->start + (root->end - root->start) / 2;
        int sum = 0;
        if (start <= mid)
        {
            sum += query(root->left, start, min(mid, end));
        }
        
        if (end > mid)
        {
            sum += query(root->right, max(mid + 1, start), end);
        }
        
        return sum;
    }
    
    void modify(SegmentTreeNode* root, int index, int value) {
        if (root->start == index && root->end == index)
        {
            root->sum = value;
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
        
        root->sum = root->left->sum + root->right->sum;
    }
};

// BIT solution
class Solution {
public:
    /* you may need to use some attributes here */

    /*
    * @param A: An integer array
    */
    Solution(vector<int> A) {
        // do intialization if necessary
        int n = A.size();
        bit.resize(1 + n);
        nums.resize(n);
        for (int i = 0; i < n; ++i) {
            modify(i, A[i]);
        }
    }

    /*
     * @param start: An integer
     * @param end: An integer
     * @return: The sum from start to end
     */
    long long query(int start, int end) {
        // write your code here
        return read(end + 1) - read(start);
    }

    /*
     * @param index: An integer
     * @param value: An integer
     * @return: nothing
     */
    void modify(int index, int value) {
        // write your code here
        int diff = value - nums[index];
        if (diff) {
            nums[index] = value;
            int i = index + 1;
            while (i < bit.size()) {
                bit[i] += diff;
                i += (-i) & i;
            }
        }
    }
    
private:
    vector<int> bit;
    vector<int> nums;
    int read(int index) {
        int sum = 0;
        while (index > 0) {
            sum += bit[index];
            index -= (-index) & index;
        }
        return sum;
    }
};