#include <iostream>
#include <vector>
using namespace std;

void display(vector<vector<bool>>&grid , int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j])
            cout<<"K ";
            else
            cout<<". ";
        }
        cout<<endl;
    }
    cout<<"\n\n";
}
bool isitsafe(int r,int c,vector<vector<bool>>&grid,int n){
    if(r-2>=0 and c-1>=0 and grid[r-2][c-1]) return false;
    if(r-1>=0 and c-2>=0 and grid[r-1][c-2]) return false;
    if(r-2>=0 and c+1<n and grid[r-2][c+1]) return false;
    if(r-1>=0 and c+2<n and grid[r-1][c+2]) return false;
    return true;
}

int ans=0;
void nknights(vector<vector<bool>>&grid,int n,int cr,int cc,int count)
{
    if(count==n){
        ans++;
        display(grid,n);
        return ;
    } 
    for (int i = cr; i < n; i++){
        for (int j = (i==cr)?cc:0; j < n; j++)
        {
          if(isitsafe(i,j,grid,n)){
              grid[i][j]=true;
              nknights(grid,n,i,j+1,count+1);
              grid[i][j]=false;
          }
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<vector<bool>> grid(n,vector<bool>(n,false));    
    nknights(grid,n,0,0,0);
    cout<<ans;
    return 0;
}
