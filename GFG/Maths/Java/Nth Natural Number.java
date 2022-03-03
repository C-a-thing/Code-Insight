//User function Template for Java

class Solution {
    long findNth(long N)
    {
        //code here
        long natural = 0;
        long temp = 1;
        while (N > 0)
        {
            natural += (temp * (N % 9));
            N = N / 9;
            temp = temp * 10;
        }
     
        return natural;
    }
}
