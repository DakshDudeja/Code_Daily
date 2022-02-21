class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& in) {
        sort(in.begin(),in.end());
        int cnt=0;
        
        int curx=in[0][0],cury=in[0][1];
        int ans=1;
        for(int i=1;i<in.size();i++){
            if(in[i][0] > curx and in[i][1]>cury)
                ans++;
            
            if(in[i][1] > cury)
                curx=in[i][0],cury=in[i][1];
        }
        
        
        return ans;
    }
};