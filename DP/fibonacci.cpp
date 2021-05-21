#include <iostream>
#include <vector>
using namespace std;

int fib(int n){
    if (n==0 || n==1) return n;
    return fib(n-1) + fib(n-2);
} 
int fibTD(int n,vector<int>&dp){  //top down approach
    if(n==0 || n==1){ 
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=fib(n-1)+fib(n-2);
    return dp[n];
}
int fibBU(int n){
    if(n==0 || n==1) return 1;
    vector<int> dp(n+1,-1);
    dp[0]=0;
    dp[1]=1;
    for (int i = 2; i <=n; i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<fibTD(n,dp)<<endl;
    cout<<fibBU(n)<<endl;
    cout<<fib(n);
    return 0;
}