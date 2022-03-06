class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > mat, int r, int c) 
    {
        // code here 
        vector<int> v;
        int r1=0,rn = r , c1 = 0 , cn = c ,i,count=0;
        while(r1<rn && c1<cn){
            //printing the first row 
            if(count>=r*c) break;
            for(i=c1;i<cn;i++){
                v.push_back(mat[r1][i]);
                count++;
            }
            r1++;
            if(count>=r*c) break;
            // printing last column
            for(i=r1;i<rn;i++){
                 v.push_back(mat[i][cn-1]);
                 count++;
            }
            cn--;
            if(count>=r*c) break;
            //printing last row
            for(i=cn-1;i>=c1;i--){
                 v.push_back(mat[rn-1][i]);
                 count++;
            }
            rn--;
            if(count>=r*c) break;
            //printing first column
            for(i=rn-1;i>=r1;i--){
                 v.push_back(mat[i][c1]);
                 count++;
            }
            c1++;
            
        }
        return v;
    }
};
