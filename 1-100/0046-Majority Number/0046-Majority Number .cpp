class Solution {
public:
    /*
     * @param : a list of integers
     * @return: find a  majority number
     */
    int majorityNumber(vector<int> nums) {
        // write your code here
        int result = -1;
        int count = 0;
        for (int num : nums)
        {
            if (num == result)
            {
                ++count;
            }
            else if (count == 0)
            {
                result = num;
                count = 1;
            }
            else
            {
                --count;
            }
        }
        
        return result;
    }
};
