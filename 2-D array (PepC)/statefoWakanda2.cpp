#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the no. of rows and column \n";
    cin>>n>>m;
    int arr[n][m];
    cout<<"ENter the elements of matrix";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }    
    }
    cout<<"AFter roaming around we get ";
    for (int k = 0; k < m; k++)
    {
        int i=0,j=k;
        while (i<n && j<m)
        {
            cout<<arr[i][j]<<endl;
            i++;
            j++;
        }
        
    }
    
    
    
    return 0;
    }