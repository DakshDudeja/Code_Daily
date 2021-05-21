#include <iostream>
#include <vector>
using namespace std;

void PrintSubset(int *arr,int i,int n,string osf)
{
    if (i==n)
        { cout<<"["<<osf<<"]\n";
        return;
        }
    //when the 1 or part is included
    PrintSubset(arr, i+1,n, osf + to_string(arr[i])+ ",");
    //when the part is excluded
    PrintSubset(arr, i+1,n,osf);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    PrintSubset(arr,0,n,"");
    return 0;   
}