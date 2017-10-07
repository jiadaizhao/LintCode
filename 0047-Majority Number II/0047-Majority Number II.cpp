class Solution {
public:
    /*
     * @param : a list of integers
     * @return: The majority number that occurs more than 1/3
     */
    int majorityNumber(vector<int> nums) {
        // write your code here
        int n = nums.size();
        int major1 = -1, major2 = -2, major3 = -3;
        int count1 = 0, count2 = 0, count3 = 0;
        for (int num : nums)
        {
            if (num == major1)
            {
                ++count1;
            }
            else if (num == major2)
            {
                ++count2;
            }
            else if (num == major3)
            {
                ++count3;
            }
            else if (count1 == 0)
            {
                major1 = num;
                count1 = 1;
            }
            else if (count2 == 0)
            {
                major2 = num;
                count2 = 1;
            }
            else if (count3 == 0)
            {
                major3 = num;
                count3 = 1;
            }
            else
            {
                --count1;
                --count2;
                --count3;
            }
        }
        
        int maxCount = max({count1, count2, count3});
        if (maxCount == count1)
        {
            return major1;
        }
        else if (maxCount == count2)
        {
            return major2;
        }
        else
        {
            return major3;
        }
    }
};
