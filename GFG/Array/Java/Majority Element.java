class Solution
{
    static int majorityElement(int a[], int size)
    {
        // your code here
        Arrays.sort(a);
        int i = 1, count = 1;
        if(size == 1)
            return a[0];
        while ( i < size )
        {
            while ( i < size && a[i] == a[i-1] )
            {
                i = i + 1;
                count ++;
            }
            if ( count > size/2 )
                return a[i-1];
            count = 1;
            i ++;
        }
        return -1;
    }
}
