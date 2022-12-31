class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
        sort(dep,dep+n);
        //a platform is already in use
        int platform=1;
        int Max_platform=1;
        //double pointer approach a pointer is in 1 st index and other is in second index
        int i=1;
        int j=0;
        
        
         while(i<n && j<n)
         {
             if(arr[i]<=dep[j])
             {
                 platform++;
                 i++;
             }
             else if(arr[i]>dep[j])
             {   platform--;
                 j++;
                 
             }
             if(platform>Max_platform)
             {
                 Max_platform=platform;
             }
         }
         return Max_platform;
    }
};
