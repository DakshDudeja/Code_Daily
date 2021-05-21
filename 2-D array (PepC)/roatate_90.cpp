#include<iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter rows and column";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter elements";
    for (int i = 0; i < n; i++)
    {for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];}
    }
    cout<<"elemenets are \n";
    int temp=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < m; j++)
        {
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }       
    }
    for (int i = 0; i < n; i++)
    {
        int fi=0;
        int li=m-1;

        while (fi<li)
        {
            int temp = arr[i][li];
            arr[i][li] = arr[i][fi];
            arr[i][fi] = temp;

            fi++;
            li--;
        }
        
    }
   //displaying b rotating 90 degree
      
      for(int i=0;i<n;i++){
       for(int j=0;j<m;j++) {
           cout<<arr[i][j]<<"\t";
       }
       cout<<endl;
    }
    return 0;
}