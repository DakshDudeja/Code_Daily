// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   public: 
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) {
        vector<int>res;
        int m=0,n=0,k=r-1,l=c-1,count=0;
        int total = r*c;
        while(count<total){
            for(int i=m,j=n;j<=l and count<total;j++){
                res.push_back(matrix[i][j]);
                count++;
            }
            m++;
            for(int i=m,j=l;i<=k and count<total;i++){
                res.push_back(matrix[i][j]);
                count++;
            }
            l--;
            for (int i=k,j=l;j>=n and count<total;j--){
                res.push_back(matrix[i][j]);
                count++;
            }
            k--;
            for(int i=k,j=n;i>=m and count<total;i--){
                res.push_back(matrix[i][j]);
                count++;
            }
            n++;
        }
       return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends