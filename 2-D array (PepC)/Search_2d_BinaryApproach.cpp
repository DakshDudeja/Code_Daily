#include<iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cout<<"Enter rows and column";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter elements";
    for (int i = 0; i < n; i++)
    {for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];}
    }
    cout<<"Enter the element to be found \n";
    cin>>k;
    int i=0,j=m-1,count=0,temp=n*m;
    bool flag=true;
    while (count<temp)
    {
        if (arr[i][j]==k && count<temp)
        {
            cout<<i<<j;
            flag=false;
            break;
            
        }
        
        else if (arr[i][j]>k && count<temp)
        {
            j--;
            count++;
        }
        else if (arr[i][j]<k && count<temp)
        {
            i++;
            count++;
        }
        
    }
    if (flag==true)
    {
        cout<<"NOt found";
    }
    
    return 0;
}
    