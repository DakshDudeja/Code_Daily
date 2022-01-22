class Solution {
public:
    int dp[100001];
    bool solve(int n){
        if(n < 0) return 0;
        else if(dp[n] != -1) return dp[n];
        
        for(int i = 1; i*i <= n;i++){
            int sq = i*i;
            if(solve(n-sq) == 0) return dp[n] = 1;
        }
        
        return dp[n] = 0;
    }
    
    bool winnerSquareGame(int n) {
        memset(dp,-1,sizeof dp);
        return solve(n);
    }
};