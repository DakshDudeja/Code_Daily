#include <iostream>
#include <vector>
#include<math.h>
using namespace std;

void baseToToTen(int n){
    int ans=0,temp=0,power=0;
    while (n!=0)
    {
        temp=n%2;
        ans=ans+temp*pow(2,power);       
        n=n/10;
        power++;
    }
    cout<<ans;
}
int main(){
    int n;
    cin>>n;
    baseToToTen(n);
    return 0;
}
