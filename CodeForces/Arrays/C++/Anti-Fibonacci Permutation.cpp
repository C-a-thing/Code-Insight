#include <bits/stdc++.h>
 
using namespace std;
 
int
main ()
{
  int t;
  cin >> t;
  while (t--)
    {
     int n;
     cin>>n;
     vector<int>v;
     for(int i=0;i<n;i++)
     {
        v.push_back(i+1); 
     }
     int x=n;
     int temp;

//sort the array in descending order
     sort(v.begin(), v.end(), greater<int>());
    for (auto i : v) {
        cout << i << ' ';//print the sorted array(which is antiFibonacci)
    }
   cout<<endl;


    for(int i=0;i<n-1;i++)//already a permutation is formed so max value of i will be n-2
    {
        temp=v[x-1];//swap two elements of array from the last index
        v[x-1]=v[x-2];
        v[x-2]=temp;

        x--;//decrement value of x in each iteration
        
        for (auto i : v) {
        cout << i << ' ';
    }
    cout<<endl;
    }
     
      
    }
 
  return 0;
}