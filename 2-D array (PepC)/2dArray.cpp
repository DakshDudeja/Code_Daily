#include<iostream>
using namespace std;
int main()
{
    int m,n,arr[10][10];
    cout<<"Enter the no. of rows \n";
    cin>>n;
    cout<<"Enter the no. of columns \n";
    cin>>m;
    cout<<"Enter the elements";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<"Elements are \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<" "<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
 return 0;   
}