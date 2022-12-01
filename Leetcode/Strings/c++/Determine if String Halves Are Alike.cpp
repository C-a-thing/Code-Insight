class Solution {
public:
    bool halvesAreAlike(string s) {
        int count1=0;
        int count2=0;
      for(int i=0;i<s.length();i++)  
      {
          if(i<s.length()/2)
          {
          if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
{
    count1++;
}

          }

          else
          {
              if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
{
    count2++;
}
          }
      }
      if(count1==count2)
      {
          return 1;
      }
      return 0;

    }
};
