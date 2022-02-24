#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int N,W;
	    cin>>N>>W;
	    int arr[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>arr[i];
	    }
	    int sum=0;
	    int count=0;
	    //sort array in descending order
	    sort(arr, arr + N, greater<int>());
	    
	    
	    //iterate over array and add it to sum
	     for(int i=0;i<N;i++)
	     {  
	         sum=sum+arr[i];
	         count++;//count variable counts the number of sale days 
	         
	         if(sum>=W)//checks if sum is greater than w or not
	         {
	             break;
	         }
	     }
	     cout<< N-count<<endl;
	}
	return 0;
}
