class Solution {
public:
    /**
     * @param height: the height
     * @param width: the width
     * @param tree: the position of tree
     * @param squirrel: the position of squirrel
     * @param nuts: the position of nuts
     * @return: the minimal distance 
     */
    int minDistance(int height, int width, vector<int> &tree, vector<int> &squirrel, vector<vector<int>> &nuts) {
        // Write your code here
        int sum = 0;
        int maxDiff = INT_MIN;
        for (auto nut : nuts) {
            int nutTreeDist = abs(tree[0] - nut[0]) + abs(tree[1] - nut[1]);
            sum += nutTreeDist * 2;
            int nutSquirrelDist = abs(squirrel[0] - nut[0]) + abs(squirrel[1] - nut[1]);
            maxDiff = max(maxDiff, nutTreeDist - nutSquirrelDist);
        }
        
        return sum - maxDiff;
    }
};
