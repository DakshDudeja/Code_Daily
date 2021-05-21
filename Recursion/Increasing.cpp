#include<iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
void fun(int n)
{   
    if (n<1)
    {
        return;
    }
    else{
        fun(n-1);
        cout<<n<<endl;
    }
}
int main()
{
    int num;
    cout<<"Enter the no ";
    cin>>num;
    fun(num);
    return 0;
}