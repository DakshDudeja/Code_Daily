#include <iostream>
#include <vector>
using namespace std;

void SubsetSums(int arr[],int i,int n,int osf=0){
    if(i>n){
        cout<<osf<<" ";
        return;
    }
    SubsetSums(arr,i+1,n,osf+arr[i]);
    SubsetSums(arr,i+1,n,osf);
}
int main(){
    int arr[]={5,1,2};
    SubsetSums(arr,0,2);
    return 0;
}

    