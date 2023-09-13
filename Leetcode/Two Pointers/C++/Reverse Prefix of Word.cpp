class Solution {
public:
    string reversePrefix(string word, char ch) {
        string n = "";
        stack<char>s;
        int flag=0;
        for(int i=0;i< word.length();i++)
        {
            if(word[i]!=ch)
            {
                if(flag==0)
                {
                   s.push(word[i]);
                }
             else
             {
                 n.push_back(word[i]); 
             }

            }
            else
            {s.push(word[i]);
                while(!s.empty())
                {
                    char  x = s.top();
                    s.pop();
                    n.push_back(x);
                   flag=1;
                }
            }
        }
        if(flag==0)
        {
           return word;
        }
        return n;
    }
};
