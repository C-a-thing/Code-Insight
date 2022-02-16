#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
int findsorted(ll arr[],int n)
{
    if(n==0||n==1)
       return 0;
       for(int i=1;i<n;i++)
       {
           if(arr[i]<arr[i-1])
           {
               return 1;
           }
       }
       return 0;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        
        cin>>n;
       ll arr[n];
      
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(findsorted(arr,n))
        {
            cout<<"YES"<<endl;
        }
        else
        {
           cout<<"NO"<<endl; 
        }
    }
 
    return 0;
}