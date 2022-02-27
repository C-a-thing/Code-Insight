//   Topic - Majority Element



//Code - 1
// Time Complexity - O(n)
// Space Complexity - O(1)
// Method - Moore's voting Algorithm

// Solution - 

class Solution{
  public:
    int majorityElement(int a[], int n)
    {
        
        // your code here
        if(n==1) return a[0];
        int num = a[0] , count = 1;
        for(int i=1;i<n;i++){
            if(a[i]==num) count++;
            else count--;
            
            if(count<=0){
                num = a[i];
                count=1;
            }
        }
        count=0;
        for(int i=0;i<n;i++){
            if(a[i]==num) count++;
        }
        if(count>(n/2)) return num;
        else return -1;
    }
};










// Code - 2
// Time Complexity - O(n)
// Space Complexity - O(n)
// Method - making frequency array 

// Solution - 


class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int n)
    {
        
        // your code here
        int mx =0;
    for(int i=0;i<n;i++){
        if(a[i]>mx)mx = a[i];
    }
    int arr[mx+1]={0};
    
    for(int i=0;i<n;i++){
        arr[a[i]]++;
    }
    //cout<<arr[3]<<endl;
    for(int i=0;i<=mx;i++){
        if(arr[i]>(n/2)) {return i;break;}
    }
    return -1;
        
    }
};
