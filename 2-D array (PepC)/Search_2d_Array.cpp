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
    cout<<"Hurray element is at  \n";
    for (int i=0;i<n;i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j]==k)
            {
                cout<<i<<"\t"<<j;            }
        }
    }
    cout<<"Not found";
    return 0;
}