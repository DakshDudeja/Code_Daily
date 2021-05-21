#include <iostream>
#include <vector>
#include<math.h>
using namespace std;

void BaseConversion(int n){
    int temp=0,power=1,ans=0;
    while (n!=0){
        temp=n%6;
        ans=temp*power+ans;
        n=n/6;
        power*=10;
    }
    cout<<ans<<"\n";

    int nans=0,ntemp=0;power=0,n=10;
    while (n!=0){
        ntemp=n%6;
        nans=nans+ntemp*pow(6,power);
        n=n/6;
        power++;
    }
    cout<<nans;
}
int main(){
    int n;
    cin>>n;
    BaseConversion(n);
    return 0;
}