#include<iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
   
    if(n>1)
    {
        return n*factorial(n-1);
    }
    return 1;
}
int main()
{
    int num=0;
    cout<<"ENter the number \n";
    cin>>num;
    cout<<"Factorial of a "<<num<<" is "<<factorial(num);
    return 0;
}