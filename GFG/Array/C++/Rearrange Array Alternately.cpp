 void rearrange(long long *arr, int n) 
    {  //if array size is 1 return as it is
        if(n==1)
    return;
    	vector<int>v;
    	// Your code here
    	for(int i=0;i<n/2;i++)
    	{
    	    v.push_back(arr[n-i-1]);
    	    v.push_back(arr[i]);
    	}
    	//for odd number of array elements
    	//add the middle element in the vector
    	if(n%2!=0)
    	{
    	    v.push_back(arr[(n-1)/2]);
    	}
    	for(int i=0;i<n;i++)
    	{
    	    arr[i]=v[i];
    	}
    }
