class Solution {
public:
    int removePalindromeSub(string s) {
      int n =s.length();
      int i=0;
      int j =n-1;
      int flag=0;
      while(i<j)
      {
          if(s[i]!=s[j])
          {
              flag=1;
              break;

          }
          else
         { i++;
            j--;
         }
      }  
      if(flag==1)
      {
          return 2;
      }
      return 1;
    }
};
