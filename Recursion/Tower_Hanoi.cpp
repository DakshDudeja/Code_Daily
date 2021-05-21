#include<iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int toh(int n,int a,int b,int c)
{
    if (n==0)
    {
        return 1;
    }
    toh(n-1,a,c,b);
    cout<<"("<<a<<","<<b<<")";
    toh(n-1,b,a,c);
    return 0;
}
int main(){
    int num;
    cout<<"ENter the numbers \n";
    cin>>num;
    
    toh(num,10,12,11);
    return 0;
    }

