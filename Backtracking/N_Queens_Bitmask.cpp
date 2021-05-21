#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

bitset<100> col,ld,rd;  //column,left diagonal,right diagonal
int ans=0;
void nqueen(int n,int curr_row){
    if(curr_row==n){
        ans++;
        return;
    }
    for(int c=0 ; c<n; c++){
        if(!col[c] and !ld[curr_row-c+n-1] and !rd[curr_row+c]){
            col[c]=ld[curr_row-c+n-1]=rd[curr_row+c]=1;
            nqueen(n,curr_row+1);
            col[c]=ld[curr_row-c+n-1]=rd[curr_row+c]=0;
        }

    }
}
int main(){
    int n;
    cin>>n;
    nqueen(n,0);
    cout<<ans;
    return 0;
}