class Solution {
public:
    string reverseWords(string s) {
        stack<char>st;
        string n="";
        char x;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ' )
            {
                st.push(s[i]);
            }
            else
            {
            while(!st.empty())
            {
             x =st.top();
             st.pop();
            n.push_back(x);
            }
             n.push_back(' ');
            }
        }
         while(!st.empty())
            {
             x =st.top();
             st.pop();
            n.push_back(x);
            }
        return n;
    }
};
