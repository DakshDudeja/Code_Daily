#include <iostream>
#include <vector>
using namespace std;

void sort_array(vector<int>&nums,int idx,int n)
{
    if(idx==n)
    return;
    for (int i = 0; i < n; i++)
    {
       if(nums[idx]>nums[idx+1])
       swap(nums[idx],nums[idx+1]);
       sort_array(nums,idx+1,n);
    }
}
int main()
{
    
    vector<int>nums ={10,9,2,4,6,3};
    sort_array(nums,0,6);
    for (int i = 0; i < 6; i++)
    {
        cout<<nums[i];
    }
    return 0;
}