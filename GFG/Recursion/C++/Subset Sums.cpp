class Solution
{
public:
void solve(int index,int sum,vector<int>&arr,vector<int>&subsetsum, int N)
{
    //base case
    if(index==N)
    {
    subsetsum.push_back(sum);
    return ;
    }
    
    //pick element
    solve(index+1,sum+arr[index],arr,subsetsum,N);
    
    //not pick element
   solve(index+1,sum,arr,subsetsum,N); 
}
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        //store the sum of each subset
        vector<int>subsetsum;
        
        //passing the index value as 0
        int index=0;
        int sum=0;
        solve(index,sum,arr,subsetsum, N);
        return subsetsum;
    }
};
