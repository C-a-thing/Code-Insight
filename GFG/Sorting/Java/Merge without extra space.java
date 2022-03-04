class Solution {

    public void merge(int arr1[], int arr2[], int n, int m) {
        // code here
        int i = 0, j = 0, k = n - 1;
        while (i <= k && j < m) 
        {
            if (arr1[i] < arr2[j])  // swapping both arrays
                i++;
            else 
            {
                int temp = arr2[j]; // no extra space required for swapping
                arr2[j] = arr1[k];
                arr1[k] = temp;
                j++;
                k--;
            }
        }
        // sorting both the arrays
        Arrays.sort(arr1);
        Arrays.sort(arr2);
    }
}
