#include <iostream>
#include <vector>
using namespace std;

void baseTenToTwo(int n){
    int ans=0,temp=0,power=1;
    while (n!=0)
    {
        temp=n%2;
        ans=power*temp+ans;
        power*=10;
        n=n/2;
    }
    cout<<ans;
}
int main(){
    int n;
    cin>>n;
    baseTenToTwo(n);
    return 0;
}