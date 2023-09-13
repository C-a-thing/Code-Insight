class Solution {
public:
    string mergeAlternately(string words1, string words2) {
        string s ="";
        int m =words1.length();
        int n =words2.length();
        int i=0;
        int x =max(m,n);
        int y=min(m,n);
        while(i<x)
        {
            if(i<y)
            {
                s.push_back(words1[i]);
                s.push_back(words2[i]);
                i++;
            }
            else
            {
                 s.push_back(m > n ? words1[i] : words2[i]);
                i++;
            }
        }
     return s;
    }
};
