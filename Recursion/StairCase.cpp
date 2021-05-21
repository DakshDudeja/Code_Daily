#include<iostream>
#include<vector>
using namespace std;
int tp=0;
void staircase(int n,int i){
    if(i==n-1){
        tp++;
        return;
    }
    if (i>=n) return;
    for (int j = 1; j <=6; j++) //change value of j
    {
        staircase(n,i+j);
    }
}
int main(){
    int n;
    cin>>n;
    staircase(n+1,0);
    cout<<tp;
    return 0;
}