#include<bits/stdc++.h>
using namespace std;
bool temp=true;
vector<int>bubblesort(int i,int j,int n,vector<int>&arr)
{
  if(j==n)
{
    j=0;
    i=i+1;
}
if(i==n+1)
    return arr;

  if(arr[i]>arr[j])
    swap(arr[i],arr[j]);
   bubblesort(i,j+1,n,arr);
}
int main(){
    vector<int>arr={2,3,7,6,9,1};
    int n=4;
    vector<int>ans = bubblesort(0,0,n,arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"\n";
    }
    return 0;
}