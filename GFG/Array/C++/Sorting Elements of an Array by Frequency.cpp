#include <bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    if(a.second==b.second)return (a.first<b.first);
    return (a.second > b.second);
}


int main() {
	//code
	int t;cin>>t;
	while(t--){
	    int n,temp;
	    cin>>n;
	    int arr[n];
	  
	    unordered_map<int,int> map;
	    
	    for(int i=0;i<n;i++){
	       cin>>arr[i];
	       map[arr[i]]++;
	    }
	    
	    vector<pair<int,int>> v(map.size());
	    
	    for(auto it:map){
	        v.push_back({it.first,it.second});
	    }
	    
	    
	   sort(v.begin(), v.end(), sortbysec);
	   for(int i = 0;i<v.size();i++){
	       if(v[i].second==0)break;
	       int cnt = v[i].second;
	       while(cnt){
	           cout<<v[i].first<<" ";
	           cnt--;
	       }
	       
	     
	   }
	   cout<<endl;
	   map.clear();
	   v.clear();
	}
	return 0;
}
