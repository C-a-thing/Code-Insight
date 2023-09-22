class Solution {
public:
    vector<int> diStringMatch(string s) {
       int n =s.length();
       vector<int>v ;
       int i=0;
       int j= n;
      for(int x=0;x<n;x++)
       {
           if(s[x]=='I')
           {
            v.push_back(i);
            i++;
           }
           else
           {
            v.push_back(j);
            j--;
           }
           
       }
       v.push_back(i++);
       return v;
    }
};
