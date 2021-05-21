#include<iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int power(int n,int m)
{
    if (n==0)
    {
        return 1;
    }
    else{
        return pow(n, m-1)*n;
    }
}
int main()
{   
    int m,n;
    cout<<"enter the number and power respectively \n";
    cin>>n>>m;
    cout<<power(n,m);
    return 0;
}