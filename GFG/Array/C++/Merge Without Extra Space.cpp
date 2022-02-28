// Topic - Merge without extra space
// time - O((n+m)*(log(n)+log(m)))
// space - O(1)
// Approach - Gap mathod 



void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int gap = ceil((n+m)/2);
	    int l=0,r=l+gap,temp=0,temp2=0;
	    while(gap>0){
	        while(r<(n+m)){
	            if(r>=n)temp = r-n;
	            if(l>=n) temp2 = l-n;
	            //cases
	            
	            if(r>=n && l>=n){
	                temp2 = l-n;
	                temp = r-n;
	                if(arr2[temp2]>arr2[temp]) 
	                    swap(arr2[temp2],arr2[temp]);
	            }
	            // case - 2
	            else if(r>=n && l<n){
	                temp = r-n;
	                if(arr1[l]>arr2[temp]) 
	                    swap(arr1[l],arr2[temp]);
	            }
	            //case - 3
	            else if(r<n && l<n){
	                if(arr1[l]>arr1[r])
	                    swap(arr1[l],arr1[r]);
	            }
	            l++,r++;
	        }
	        
	        
	        
	        gap = ceil(gap/2);
	        l=0,r=l+gap,temp = 0,temp2=0;
	        
	    }
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+m);
	   
	}
};





// Topic - Merge without extra space (this approach requires O(n) space but an easy approach 
// time - O((n+m)*(log(n)+log(m)))
// space - O(n)
// Approach - take a extra array , insert elements of 2 arrays and sort it . Then insert in those arrays again




void merge(int a1[], int a2[], int n, int m) {
	    // code here
	    int a[n+m];
	    int cnt = 0,l=0,r=0;
	    for(int i=0;i<n;i++){
	      a[i]=a1[i];
	    }
	    for(int i=n;i<n+m;i++){
	      a[i]=a2[cnt];
	      cnt++;
	    }
	    cnt=0;
	    sort(a,a+n+m);
	    for(int i=0;i<n;i++){
	      a1[i]=a[i];
	    }
	    for(int i=n;i<n+m;i++){
	      a2[cnt]=a[i];
	      cnt++;
	    }
	}
};
