class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        long long ans=1e18;
        long long n=beans.size();
        sort(beans.begin(),beans.end());
        long long sum=0;
        for(auto it:beans)
            sum+=it;
        for(long long i=0;i<n;i++){
            long long change = sum - (n-i)*(long long)beans[i]*1LL;
            ans=min(ans,change);
        }
    return ans;
    }
};