class Solution {
public:
        int dp[100001];

    bool solve(int n){
       if(n==0) return false; 
        if(dp[n]!=-1) return dp[n];
        bool ans = false;
        
        for(int i=1;i*i<=n;i++){
           ans=ans || !solve(n-i*i);
        }
        return dp[n]=ans;
    }
    bool winnerSquareGame(int n) {
         memset(dp,-1,sizeof(dp));
        return solve(n);
    }
};