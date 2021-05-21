#include<iostream>
using namespace std;
int main()
{
    int m1,n1,n2,m2;
    cout<<"enter the rows and column of matricx 1";
    cin>>n1>>m1;
    cout<<"enter the rows and column of matricx 2";
    cin>>n2>>m2;
    int arr[n1][m1];
    int arr2[n2][m2];
     cout<<"Enter elements of 1st matrix \n";

    for(int i=0;i<n1;i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cin>>arr[n1][m1];
        }
        
    }
    cout<<"Enter elements of 2nd matrix \n";
        for(int i=0;i<n2;i++)
    {
        for (int j = 0; j < m2; j++)
        {
    
            cin>>arr2[n2][m2];
        }
        
    }
    if (m1!=n2)
    {
      cout<<"Not possible";
    }
    
    int arr3[n1][m2];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            arr3[n1][m2]=0;
            for (int k = 0; k < m1 ; k++)
            {
                arr3[i][j] += arr[i][k] * arr2[k][j];
            
            }
            
        }
        
    }
    cout<<"REsulting matrix is\n";
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            cout<<arr3[i][j];
        }
        
    }
    return 0;
    
}