/**
 * Definition of ArrayReader:
 * 
 * class ArrayReader {
 * public:
 *     int get(int index) {
 *          // return the number on given index, 
 *          // return -1 if index is less than zero.
 *     }
 * };
 */
class Solution {
public:
    /**
     * @param reader: An instance of ArrayReader.
     * @param target: An integer
     * @return: An integer which is the first index of target.
     */
    int searchBigSortedArray(ArrayReader *reader, int target) {
        // write your code here
        int i = 1;
        while (reader->get(i - 1) < target)
        {
            i *= 2;
        }
        
        int start = i / 2, end = i - 1;
        while (start + 1 < end)
        {
            int mid = start + (end - start) / 2;
            if (reader->get(mid) < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
        }
        
        if (reader->get(start) == target)
        {
            return start;
        }
        else if (reader->get(end) == target)
        {
            return end;
        }
        else
        {
            return -1;
        }
    }
};
