#include<bits/stdc++.h>
using namespace std;
int total_paths=0;
void PermutationWithoutRepition(vector<int>&arr,int target,int sum, string ans,vector<int>&vis){
    if(sum==target){
        total_paths+=1;
        cout<<ans<<"\n";    
        return;
    }
    for(int i=0; i < arr.size();i++){
        if(sum+arr[i]<=target && vis[i]==0){
        vis[i]=1;
        PermutationWithoutRepition(arr,target,sum+arr[i],ans+to_string(arr[i]),vis);
        vis[i]=0;
    }
    }
}
int main(){
    
    vector<int>arr={1,2,3}; // ludo target,staircase etc
    vector<int>vis(arr.size(),0);
    int target=3;
    PermutationWithoutRepition(arr,target,0,"",vis);
    //cout<<total_paths<<"\n";
    return 0;
}