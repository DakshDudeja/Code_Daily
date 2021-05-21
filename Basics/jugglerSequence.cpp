#include <iostream>
#include <vector>
#include<math.h>
using namespace std;

void jugglerSequence(int N){
        if(N<=1)
        {
            return;
        }
        if(N%2==0)
        N=pow(N,0.5);
        else
        N=pow(N,1.5);
        cout<<N<<" ";
        jugglerSequence(N);
    }
int main()
{
    int N;
    cin>>N;
    jugglerSequence(N);
    return 0;
}