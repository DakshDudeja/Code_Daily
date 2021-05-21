#include<iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int zigzag(int n){
    if(n==0)
    {return 1;
    }
    cout<<n+" ";
    zigzag(n-1);
    cout<<n+" ";
    zigzag(n-1);
    cout<<n+" ";
    return 0;
}
int main(){
    int num;
    cout<<"Enter the number \n";
    cin>>num;
    zigzag(num);
    return 0;
}
