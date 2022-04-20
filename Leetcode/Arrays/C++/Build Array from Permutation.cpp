class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int x=nums[i];
            int y=nums[x];
            ans.push_back(y);
}
        return ans;
    }
};
