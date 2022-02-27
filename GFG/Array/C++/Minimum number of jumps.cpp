class Solution{
  public:
    int minJumps(int a[], int n){
        // Your code here
        int mx_range = a[0],step = a[0],jump = 1,temp=0;
        if(n==1) return 0;
        if(a[0]==0) return -1;
        else{
            for(int i=1;i<n;i++){
                if(i==n-1)return jump;    // return statement
                else{
                    // find max index that can be reached from either this index or previous indexes
                     mx_range = max(mx_range,i+a[i]);
                
                    step--;
        
                    if(step==0){
                        jump++;
                        if(i>=mx_range) return -1;
                        step = mx_range-i;
                    }
                    
                }
            }
        }
       
    }
};
