#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
      int n;
      cin>>n;
     
       string s;
       cin>>s;
       int count=0;
       int maxval=0;
       for(int i=0;i<n;i++)
       { 
           maxval=max(s[i]-96 , maxval);
       }
       cout<<maxval <<endl;
    }

    return 0;
}
