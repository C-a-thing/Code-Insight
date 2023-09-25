class Solution {
public:
    bool isSubsequence(string s, string t) {
       int x = s.length();
       int y = t.length();
       int i=0; //for s
       int j =0;//for t
       while(j<y)
       {
           if(s[i]==t[j])
           {   i++;
               j++;
           }
           else
           {
               j++;
           }
       }
       if(i!=x)
       {
           return false;
       }
       return true;
    }
};
