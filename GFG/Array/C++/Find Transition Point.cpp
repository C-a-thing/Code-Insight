int transitionPoint(int arr[], int n) {
  //--------------Basic Approach-----------------------
    // Time Complexity - O(n)
    // Space Complexity - O(1)
            // for(int i=0;i<n;i++){
            //     if(arr[i]==1){
            //         return i;
            //     }
            // }
            // return -1;
            
      // ----------------------------------------------      
            
            // Time Complexity - O(log(n))
            // Space Complexity - O(1)
            // Approach - Binary Search
            
    int left = 0 , right = n-1 ,mid;
    while(left<=right){
        mid = (left+right)/2;
        if(arr[mid] == 1){
            if(mid==0 || (mid>0 && arr[mid-1]==0)){
                return mid;
            }
            else right=mid-1;
            
        }
        else if(arr[mid] == 0) left = mid+1;
    }
    return -1;
}
