class Solution {
public:
bool palindrome(string s)
{
   int i=0;
   int j =s.length()-1;
   int n=j/2;
  
   while(i<j)
   {
       
        if(s[i]!=s[j])
        {  
            return false;
        }
        else
        {
            j--;
            i++;
        }
   }
   return true;
}
    string firstPalindrome(vector<string>& words) {
        int n = words.size();
        for(int i =0;i<n;i++)
        {
          if(palindrome(words[i])==1)
          {
              return words[i];
          }
        }
        return "";
    }
};
