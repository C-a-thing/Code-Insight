#include <bits/stdc++.h>
#define tcLim 500
#define nLim 500
using namespace std;
// k-th min unique number

int main () {
    int a[] = {1,2,1,5,6,8,5};
    int arr_size = 7;
    set<int> s; // declared set
    int cnt=0; 
    
    // inserted array values in set
    for(int i=0;i<7;i++){
        s.insert(a[i]);
    }
    
    for(auto it=s.begin();it!=s.end();it++){
        a[cnt] = *it;
        cnt++;
    }
    int n = s.size();
    
    int k = 3;
    priority_queue<int> p;
    for(int i=0;i<n;i++){
        p.push(a[i]);
        if(p.size()>k)p.pop();
    }
    cout<<p.top();
    return 0;
}
