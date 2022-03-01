class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> v;
        
        if(intervals.size()==1) return intervals;
        sort(intervals.begin(),intervals.end());
        int start = intervals[0][0];
        int max = intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<=max){
                if(intervals[i][1]>max){
                    max = intervals[i][1];
                }
            }
            
            else{
                v.push_back({start,max});
                start = intervals[i][0];
                max = intervals[i][1];
            }
            if(i==intervals.size()-1){
                v.push_back({start,max});
            }
        }
        
        
        
        return v;
    }
};
