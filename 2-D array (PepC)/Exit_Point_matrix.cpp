#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter rows and column";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter elements";
    for (int i = 0; i < n; i++)
    {for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];}
    }
    int dir = 0,i=0,j=0;
    while (true)
    {
        dir = (dir+arr[i][j])%4;
        if (dir==0)
        j++;
        else if (dir==1)
        {
            i++;
        }
        else if (dir==2)
        {
            j--;
        }
        else if(dir==3)
        {
            i--;
        }
        
        if (i<0)
        {
            i++;
            break;
        }else if (j<0)
        {
            j++;
            break;
        }else if (j==m)
        {
            j--;
            break;
        }else if (i==n)
        {  
            i--;
            break;
                } 
    }
    cout<<i<<endl<<j;
    
    return 0;
}