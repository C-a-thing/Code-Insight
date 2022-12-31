class Solution {
  public:
    int minLaptops(int n, int start[], int end[]) {
       
        sort(start,start+n);
        sort(end,end+n);
        //a laptop is already in use
        int laptop=1;
        int Max_used=1;
        //double pointer approach a pointer is in 1 st index and other is in second index
        int i=1;
        int j=0;
        
        
         while(i<n && j<n)
         {    //if the previous laptop is free 
             if(start[i]>=end[j])
             {
                 laptop--;
                 j++;
             }
           //else increment laptop count
             else if(start[i]<end[j])
             {   laptop++;
                 i++;
                 
             }
             if(laptop>Max_used)
             {
                 Max_used=laptop;
             }
         }
         return Max_used;
        // Code here
    }
};
