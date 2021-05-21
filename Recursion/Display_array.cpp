#include <iostream>
using namespace std;

void display(int arr[], int idx, int n){
    if(idx==n)
    {
        return;
    }
    cout<<arr[idx]<<endl;
    idx++;
    display(arr,idx,n); 
}
int main(){
    int n;
    cout<<"Enter the size of array \n"
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    display(arr, 0, n);
}
