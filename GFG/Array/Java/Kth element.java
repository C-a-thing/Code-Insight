//User function Template for Java


class Solution {
    public long kthElement( int arr1[], int arr2[], int n, int m, int k) {
        
        int[] sorted = new int[m + n];
        
        // coping the two arrays into another array
        System.arraycopy(arr1, 0, sorted, 0, arr1.length);  
        System.arraycopy(arr2, 0, sorted, arr1.length, arr2.length);
        Arrays.sort(sorted);  // sorting the new array in ascending order
        return sorted[k-1];  // returning the kth element
    }
}
