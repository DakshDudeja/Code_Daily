#include<iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
void decreasing(int n)
{
    if(n>1)
    return;
    else
    {
        cout<<n;
        decreasing(n-1);
    }
   
}
void increasing(int n1)
{
    if(n1>1)
    return;
    else
    {
        increasing(n1-1);
        cout<<n1; 
    }

}
int main()
{
    int num;
    cout<<"Enter the number \n";
    cin>>num;
    increasing(num);
    decreasing(num);
    return 0;
}