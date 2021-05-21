#include<iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string s1;
    getline(cin,s);
    //int i,j;

for (int i = 0; i < s.length(); i++)
{
    for (int j = i+1; j <= s.length(); j++)
    {
        string ss = s.substr(i,j);
        if (isPallindrome(ss)==true)
        {
            cout<<ss;
        }
        
    }
    
}

return 0;
}
bool isPallindrome(ss):
{
    int i=0;
    int j=s.length()-1;
    while (i<=j)
    {
        char ch1 = s.charAt(i);
        char ch2 = s.charAt(j);
        if (ch1!=ch2)
        {
            return false;
        }
        else{
            i++,j--;
        }
    }
    return true;
    
}
