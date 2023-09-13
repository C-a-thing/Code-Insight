class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int i=0;
        int n = nums.size();
        int j = n-1;
        int count =0;
        sort(nums.begin(),nums.end());
        while(i<j)
        { 
          int sum= nums[i]+nums[j];
            if(sum<target)
            {
                count+=(j-i);
                i++;
                //cout<<j-i<<" ";
            }
            if(sum>=target)
            {
                j--;
            }
           
        }
        return count;
    }
};
