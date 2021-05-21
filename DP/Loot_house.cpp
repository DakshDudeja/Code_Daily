#include <iostream>
#include <vector>
using namespace std;

int loothouseTD(vector<int>&arr, vector<int>&dp, int i){
    if(i==0){
        return dp[0]=arr[0];
    }
    if(i==1){
        return dp[1]=max(arr[0],arr[1]);
    }
    if(dp[i]!=-1) return dp[i];

    return dp[i] = max(loothouseTD(arr,dp,i-1),loothouseTD(arr,dp,i-2)+arr[i]);
}
int loothouseBU(int n,vector<int>&arr){
    vector<int>dp(n,0);
    dp[0] = arr[0];
    dp[1] = max(arr[0],arr[1]);
    for (int i = 2; i<n; i++)
    {
        dp[i]=max(dp[i-1],dp[i-2]+arr[i]);
    }
    return dp[n-1];
    }

int main(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    vector<int>dp(n,-1);
    cout<<loothouseTD(arr,dp,n-1)<<endl;
    cout<<loothouseBU(n,arr);
    return 0;
}