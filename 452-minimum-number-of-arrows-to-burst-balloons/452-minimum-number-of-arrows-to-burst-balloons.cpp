
class Solution {
public:

    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),[](vector<int>&a,vector<int>&b){
            return a[1]<b[1];
        });
        int arrow=0;
        int endPoint=0;
        for(int i=0;i<points.size();i++){
            if( arrow==0 || points[i][0]  > endPoint){
                arrow++;
                endPoint = points[i][1];
            }
            else
                continue;
        }
        return arrow;
    }
};