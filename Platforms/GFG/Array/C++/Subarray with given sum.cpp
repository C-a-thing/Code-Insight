class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        long long  sum=0;
        vector<int> v;

        int low = 0,high = 0;
        for(int i=0;i<n;i++){
            
            sum += arr[i];
            high = i;
            if(sum == s){
                v.push_back(++low);
                v.push_back(++high);
                return v;
            }
            else if(sum>s){
                while(sum>s){
                     sum-=arr[low];
                     low++;
                      if(sum==s){
                     v.push_back(++low);
                v.push_back(++high);
                return v;
                }
                }
               
               
            }
        }
        if(v.size()==0)v.push_back(-1);
        return v;
    }
};
