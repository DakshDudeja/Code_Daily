#include <iostream>
#include <vector>
using namespace std;

bool isItSafe(vector<vector<bool>>grid,int row,int col,int n );
void display(vector<vector<bool>>&grid , int n);


int count =0;
void CountQueen(vector<vector<bool>>&grid,int curr_row,int n)
{
    if(curr_row==n){
        count++;
        display(grid,n);
        cout<<"\n\n";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if(isItSafe(grid,curr_row,i,n)){
            grid[curr_row][i]=true;
            CountQueen(grid,curr_row+1,n);
            grid[curr_row][i]=false;
        }
    }
}
bool isItSafe(vector<vector<bool>>grid,int row,int col,int n )
{
    for (int i = row-1; i >=0; i--){ //column check
        if (grid[i][col]) return false;
    }
    for (int i = row-1,j=col-1; i>=0 && j>=0; i--,j--){ //left upper diagonal
        if (grid[i][j]) return false;
    }
    for (int i = row-1,j=col+1; i>=0 && j<n; i--,j++){ //right upper diagonal
        if (grid[i][j]) return false;
    }
    return true;
}
void display(vector<vector<bool>>&grid , int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j])
            cout<<"Q ";
            else
            cout<<". ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    vector<vector<bool>> grid(n,vector<bool>(n,false));
    CountQueen(grid,0,n);
    cout<<count<<endl;
    return 0;
}
