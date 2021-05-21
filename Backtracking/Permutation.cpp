#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
void solve(vector<int>&nums,int j){
        if(j==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=j;i<nums.size();i++){
        swap(nums[i],nums[j]);
        solve(nums,j+1);
        swap(nums[i],nums[j]);
        }
}
int main(){
    int n;
    cin>>n;
    vector<int>nums;
    int val;
    
    for (int i = 0; i < n; i++)
    {
        cin>>val;
        nums.push_back(val);
    }
    vector<int>temp;
    solve(nums,0);
    for (int i = 0; i < ans.size(); i++)
    {
    for (int j = 0; j < ans[i].size(); j++)
    {
        cout<<ans[i][j];
    }
    cout<<endl;
    }
    
    return 0;
}