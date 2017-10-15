/**
 * class Comparator {
 *     public:
 *      int cmp(string a, string b);
 * };
 * You can use compare.cmp(a, b) to compare nuts "a" and bolts "b",
 * if "a" is bigger than "b", it will return 1, else if they are equal,
 * it will return 0, else if "a" is smaller than "b", it will return -1.
 * When "a" is not a nut or "b" is not a bolt, it will return 2, which is not valid.
*/
class Solution {
public:
    /**
     * @param nuts: a vector of integers
     * @param bolts: a vector of integers
     * @param compare: a instance of Comparator
     * @return: nothing
     */
    void sortNutsAndBolts(vector<string> &nuts, vector<string> &bolts, Comparator compare) {
        // write your code here
        quicksort(nuts, bolts, 0, nuts.size() - 1, compare);
    }
    
private:
    void quicksort(vector<string> &nuts, vector<string> &bolts, int start, int end, Comparator compare) {
        if (start < end) {
            int pivot = partitionNuts(nuts, start, end, bolts[end], compare);
            
            partitionBolts(bolts, start, end, nuts[pivot], compare);
            
            quicksort(nuts, bolts, start, pivot - 1, compare);
            quicksort(nuts, bolts, pivot + 1, end, compare);
        }
    }
    
    int partitionNuts(vector<string> &nuts, int start, int end, string bolt, Comparator compare) {
        int i = start, j = start, k = end;
        while (j <= k) {
            int result = compare.cmp(nuts[j], bolt);
            if (result == -1) {
                swap(nuts[i++], nuts[j++]);
            }
            else if (result == 1) {
                swap(nuts[k--], nuts[j]);
            }
            else {
                ++j;
            }
        }
        
        return i;
    }
    
    int partitionBolts(vector<string> &bolts, int start, int end, string nut, Comparator compare) {
        int i = start, j = start, k = end;
        while (j <= k) {
            int result = compare.cmp(nut, bolts[j]);
            if (result == 1) {
                swap(bolts[i++], bolts[j++]);
            }
            else if (result == -1) {
                swap(bolts[k--], bolts[j]);
            }
            else {
                ++j;
            }
        }
        
        return i;
    }
};
