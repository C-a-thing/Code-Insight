#include <bits/stdc++.h>
 
using namespace std;
 
int
main ()
{
  int t;
  cin >> t;
  while (t--)
    {
      string s;
      int x, y, z, X, Y, Z;
      cin >> s;
      for (int i = 0; i < s.length (); i++)
	{
	  if (s[i] == 'r')
	    {
	      x = i + 1;
	    }
	 else if (s[i] == 'g')
	    {
	       y = i + 1;
	    }
	 else if (s[i] == 'b')
	    {
	       z = i + 1;
	    }
	 else if (s[i] == 'R')
	    {
	       X = i + 1;
	    }
	 else if (s[i] == 'G')
	    {
	       Y = i + 1;
	    }
	  else 
            {
                 Z=i+1;
            }
 
	}
	 //cout<<x <<" "<<y<<" "<<z<<" "<<X<<" "<<Y<<" "<<Z<<" "<<endl;
	if(X<x||Y<y||Z<z)
	{
	    cout<<"NO"<<endl;
	}
	else
	{
	   cout<<"YES"<<endl; 
	}
    }
 
  return 0;
}