#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {  
        
        int a,b,c,d,e,f;
        cin>>a>>b;
        cin>>c>>d;
        cin>>e>>f;
        int count=0;
       if(b==d && f<b)
       {
           cout<<abs(c-a)<<endl;
       }
       else if(f==d && b<f)
       {
           cout<<abs(c-e)<<endl;
       }
       else if(f==b && d<f)
       {
           cout<<abs(e-a)<<endl;
       }
       else
       {
           cout<<0<<endl;
       }
    }
 
    return 0;
}
