#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
void subset(vector<int>&nums,vector<int>&temp,int i){
    if(i==nums.size()){
        ans.push_back(temp);
        return ;
    }
    temp.push_back(nums[i]);
    subset(nums,temp,i+1);
    temp.pop_back();
    subset(nums,temp,i+1);
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
    subset(nums,temp,0);
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