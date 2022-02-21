class Solution {
    public boolean isPalindrome(int x) 
    {
        int n=x,rev=0,r;
        while(n>0)
        {
            r = n % 10;    
            rev = (rev * 10) + r;    
            n = n / 10;    
        }    
        if(x==rev)
            return true;
        else
            return false;
    }
}
