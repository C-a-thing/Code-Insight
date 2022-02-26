// 1470. Shuffle the Array
// Qn link: https://leetcode.com/problems/shuffle-the-array/

class Solution {
    public int[] shuffle(int[] nums, int n) {
        int[] result = new int[2*n];
        int j = 0;
        for(int i = 0; i<n; i++){
            result[j] = nums[i];
            result[j+1] = nums[n+i];
            j += 2;
        }
        return result;
    }
} // O(n)
