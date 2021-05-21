#include<iostream>
#include<string>
using namespace std;
int total_paths=0;
void mazepath(int i,int j,int n,int m,string osf)
{
    //base case
    if (i==n-1 && j==m-1)
    {
        total_paths+=1;
        cout<<osf<<endl;
        return;
    }
    if (i>=n || j>=m) //if it exits the matrix
    {
        return;
    }
    mazepath(i,j+1,n,m,osf+"R");//right move
    mazepath(i+1,j,n,m,osf+"B");//down move   
    mazepath(i+1,j+1,n,m,osf+"D");//if we move diagonally;
}
int main()
{
    int m,n;
   
    mazepath(0,0,3,3,"");
    cout<<"Total Paths = "<<total_paths;
    return 0;
}