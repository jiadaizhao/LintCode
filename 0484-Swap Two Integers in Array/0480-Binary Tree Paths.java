public class Solution {
    /**
     * @param A: An integer array
     * @param index1: the first index
     * @param index2: the second index
     * @return: nothing
     */
    public void swapIntegers(int[] A, int index1, int index2) {
        // write your code here
        int temp = A[index1];
        A[index1] = A[index2];
        A[index2] = temp;
    }
}
