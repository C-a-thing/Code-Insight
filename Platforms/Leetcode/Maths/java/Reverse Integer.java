class Solution {
    public int reverse(int x) {
        boolean neg = false;
        if (x < 0) 
        {
            x = -x;
            neg = true;
        }
        long rev = 0;
        while (x > 0) 
        {
            int temp = x % 10;
            rev = rev * 10 + temp;
            x /= 10;
        }
        if (rev > Integer.MAX_VALUE) 
            return 0;
        
        if (neg)
            return ((int) -rev);
        return ((int) rev);
    }
}
