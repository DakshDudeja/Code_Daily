#include<bits/stdc++.h>
using namespace std;
int total_paths=0;
void PermutationWithRepition(vector<int>&arr,int target,int sum, string ans){
    if(sum==target){
        total_paths+=1;
        cout<<ans<<"\n";    
        return;
    }
    for(int i=0 ; i < arr.size();i++){
        if(sum+arr[i]<=target)
        PermutationWithRepition(arr,target,sum+arr[i],ans+to_string(arr[i]));
    }
}
int main(){
    
    vector<int>arr={1,2,3,6,7,8,9}; // ludo target,staircase etc
    int target=9;
    PermutationWithRepition(arr,target,0,"");
    cout<<total_paths<<"\n";
    return 0;
}