public:
    vector<int> find(int arr[], int n , int x )
    {  vector<int> v;
        // code here
        int max_val=-1; ;
        int min_val=1e9;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==x)
            {
                max_val =  max(max_val , i);
                min_val =  min(min_val , i);
            }
        }
        if(max_val==-1 &&   min_val==1e9)
        {
            v.push_back(-1);
            v.push_back(-1);
        }
        else
        {
            
            v.push_back(min_val);
            v.push_back(max_val);
        }
        return v;
    }
