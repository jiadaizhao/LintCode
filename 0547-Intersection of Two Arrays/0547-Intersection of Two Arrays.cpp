class Solution {
public:
    /**
     * @param nums1 an integer array
     * @param nums2 an integer array
     * @return an integer array
     */
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // Write your code here
        vector<int> result;
        unordered_set<int> table;
        for (int num1 : nums1) {
            table.insert(num1);
        }
        
        for (int num2 : nums2) {
            if (table.find(num2) != table.end()) {
                result.push_back(num2);
                table.erase(num2);
            }
        }
        
        return result;
    }
};

class Solution {
public:
    
    /*
     * @param nums1: an integer array
     * @param nums2: an integer array
     * @return: an integer array
     */
    vector<int> intersection(vector<int> nums1, vector<int> nums2) {
        // write your code here
        vector<int> result;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                ++i;
            } else if (nums1[i] > nums2[j]) {
                ++j;
            } else {
                if (result.size() == 0 || result.back() != nums1[i]) {
                    result.push_back(nums1[i]);
                }
                ++i;
                ++j;
            }
        }
        
        return result;
    }
};
