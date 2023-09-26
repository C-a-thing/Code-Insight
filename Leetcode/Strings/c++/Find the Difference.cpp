class Solution {
public:

    char findTheDifference(string s, string t) {
      unordered_map<char,int>m1;
     
       for(int i=0 ; i< t.length();i++)
       {
           m1[t[i]]++;
       }
       for(int i=0 ; i< s.length();i++)
       {
           m1[s[i]]--;
       }
       for(auto it:m1)
       {
           if(it.second > 0)
           {
               return it.first;
           }
       }
       return t[0];
    }
};
