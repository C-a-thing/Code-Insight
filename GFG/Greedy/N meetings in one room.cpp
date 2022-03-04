class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    
    static bool compare(pair<int,int> a ,pair<int,int> b){
        if(a.second == b.second) return a.first<b.first;
        return a.second<b.second;
    }
    
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++)v[i]={start[i],end[i]};
        sort(v.begin(),v.end(),compare);
        int c=0,d=1,count=1;
        while(d<n){
            if(v[c].second<v[d].first){
                count++;
                c=d;d++;
            }
            else d++;
        }
        
        return count;
        
    }
};
