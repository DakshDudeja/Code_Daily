#include<iostream>
#include<string>
using namespace std;
int total_paths=0;

void dicepath(int n,int i,string osf)
{
    if (i==n-1)
{
    total_paths++;
    cout<<osf<<endl;
    return;
}
    if (i>=n) return;
    for (int j = 1; j <=3; j++)
{
    dicepath(n,i+j,osf+to_string(j)+"->");
}
}
    int main()
{
    dicepath(4,0,"");
    cout<<"Total paths = "<<total_paths<<endl;
    return 0;
}