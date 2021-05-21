#include<iostream>
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
        }2
        
    }
    int minr=0;
    int minc=0;
    int maxr=n-1;
    int maxc=m-1;
    int total=n*m;
    int count=0;

    while (count<total)
    {
        for (int  i = minr,j=minc; i <= maxr && count<total ; i++)
        {
            cout<<arr[i][j]<<"\n";
            count++;
        }
        minc++;
       
        
        for (int i = maxr,j=minc; j <= maxc && count<total; j++)
        {
            cout<<arr[i][j]<<"\n";
            count++;
        }
        maxr--;

        for (int i = maxr,j=maxc; i >= minr && count<total; i--)
        {
            cout<<arr[i][j]<<"\n";
            count++;
        }
        maxc--;

        for (int i = minr ,j=maxc; j >=minc && count<total ; j--)
        {
            cout<<arr[i][j]<<"\n";
            count++;
        }
        minr++;
        
    }
    
    
    return 0;
}