//User function Template for Java

class Compute {
    
    public int largest(int arr[], int n)
    {
         int max = arr[0];
       
         for (int i = 1; i < n; i++)
             if (arr[i] > max)
                 max = arr[i];
       
         return max;
    }
}
