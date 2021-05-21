#include<iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int fun(int n)
{   
    int i=1;
    if (n<1)
    {
         return i;
    }
    else{
        cout<<n<<endl;
        return fun(n-1);
    }
      
}
int main()
{
    int n;
    cout<<"Enter the no ";
    cin>>n;
    return fun(n);
}