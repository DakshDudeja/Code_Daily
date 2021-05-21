#include<bits/stdc++.h>
using namespace std;
int totalways=0;
void display(vector<vector<int>>&grid,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cout<<grid[i][j]<<" ";
        }
        
        cout<<endl;
    }
}


bool isSafe(vector<vector<int>>&grid,int i,int j,int n,vector<vector<bool>>&visited){
    return i>=0 and j>=0 and i<n and j<n and visited[i][j]==false; 
}


void KnightTour(vector<vector<int>>&grid,int i,int j,int n,int count,vector<vector<bool>>&visited){
    if(count==n*n-1){
        grid[i][j]=count;
        //cout<<"kya hua\n";
        display(grid,n);
        totalways+=1;
        cout<<"\n\n\n";
        return;
    }
    if(count>=n*n){
      return;
    }
     

    int xdir[8]={-2,-1,-2,-1,2,1,2,1};
    int ydir[8]={1,2,-1,-2,1,2,-1,-2};

    visited[i][j]=true;
    grid[i][j]=count;
    for(int k=0;k<8;k++){
      if(isSafe(grid,i+xdir[k],j+ydir[k],n,visited)){
           //cout<<"4333\n";
          KnightTour(grid,i+xdir[k],j+ydir[k],n,count+1,visited);
          
      }
    }
    //grid[i][j]=-1;
    //cout<<"ghkyy\n";
    visited[i][j]=false;
    


}
int main(){
 int n;
 cin>>n;
 vector<vector<int>>grid(n,vector<int>(n,-1));
 vector<vector<bool>>visited(n,vector<bool>(n,false));
 KnightTour(grid,0,0,n,0,visited);
 
 cout<<totalways;
return 0;
}