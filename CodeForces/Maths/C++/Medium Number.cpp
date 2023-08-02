#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
    //   int n;
    //   cin>>n;
       int a,b,c;
       cin>>a>>b>>c;
       if(a> b && b> c)
       {
           cout<<b<<endl;
       }
      else if(b> c && c> a)
      {
           cout<<c<<endl;
       }  
       else if(a> c && c> b)
       {
           cout<<c<<endl;
       }
       else if(b> a && a> c)
       {
           cout<<a<<endl;
       }
         else if(c> b && b> a)
       {
           cout<<b<<endl;
       }
       else
       {
           cout<<a<<endl; 
       }
       
    }

    return 0;
}
