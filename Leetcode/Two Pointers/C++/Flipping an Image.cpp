class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& nums) {
        int n =nums.size();
        for(int i=0;i<n;i++)
        {
            reverse(nums[i].begin(),nums[i].end());
             for(int j=0;j<n;j++)
             {
                 if(nums[i][j]==0)
                 {
                     nums[i][j]=1;
                 }
                 else
                 {
                   nums[i][j]=0;  
                 }
             }
        }
        return nums;
    }
};
