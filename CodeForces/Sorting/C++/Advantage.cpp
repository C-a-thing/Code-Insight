#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
      int n;
      cin>>n;
     vector<int>v(n);
     for(int i=0;i<n;i++)
     {
         cin>>v[i];
     }
      vector<int> vect2; 
  
    
      //Finds the maximum and minimum element from the vector
       int x =*max_element(v.begin(),v.end());
       int k =*min_element(v.begin(),v.end());

       int y;
//set to omit repeated elements
       set<int>s;
       for(int i=0;i<n;i++)
     {   s.insert(v[i]);

         if(v[i]!=x)
         {
             v[i]=(v[i]-x);
         }
         else
         {  //if multiple largest element found then insert all the indexes of their position in a vector
            vect2.push_back(i);
         }
     }
       
       int largest = *(--s.end());  // Get the largest element
    int secondLargest = *(----s.end());//Second largest element
    //cout<<secondLargest<<largest<<endl;

//if size of vector>1 then multiple repeating largest eleements are found 
//for that case the difference will be from the largest element , Not from the second largest eleement
    if(vect2.size()>1)
    {
          for(int i=0;i<vect2.size();i++)
    {
       v[vect2[i]]=v[vect2[i]]-largest;  
      
    }
     
    }
    else
    {
        v[vect2[0]]=v[vect2[0]]-secondLargest;   
    }
   //if maximum value and minumum value from the vector are same then all element will have same value , so all output will be zero 
       if(x==k)
     {
         for(int i=0;i<n;i++)
        {
            cout<<0<<" ";
        }
        cout<<endl;
         
     }
     else
     
        {
            for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        }
    }
 
    return 0;
}
