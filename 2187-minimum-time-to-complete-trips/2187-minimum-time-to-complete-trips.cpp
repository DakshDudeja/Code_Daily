#define pp 100000000000001
class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long start=1;
        long long end=pp;
        long long ans=0;
        while(start<=end){
            long long mid=start+(end-start)/2;
            long long trips=0;
            for(auto e:time){
                trips+=(mid/e);
            }
            if(trips<totalTrips){
                start=mid+1;
            }
            else{
                ans=mid;
                end=mid-1;
            }
        }
        return ans;
    }
};