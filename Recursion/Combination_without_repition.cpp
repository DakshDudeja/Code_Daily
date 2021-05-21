#include<bits/stdc++.h>
using namespace std;
int total_paths=0;
void CombinationWithoutRepition(vector<int>&arr,int target,int sum, string ans,int id){
    if(sum==target){
        total_paths+=1;
        cout<<ans<<"\n";    
        return;
    }
    for(int i=id ; i < arr.size();i++){
        if(sum+arr[i]<=target)
        CombinationWithoutRepition(arr,target,sum+arr[i],ans+to_string(arr[i]),i+1);
    }
}
int main(){
    
    vector<int>arr={1,2,3}; // ludo target,staircase etc
    int target=3;
    CombinationWithoutRepition(arr,target,0,"",0);
    //cout<<total_paths<<"\n";
    return 0;
}