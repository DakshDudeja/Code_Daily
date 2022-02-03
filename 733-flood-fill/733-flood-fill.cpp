class Solution {
public:
    void solve(vector<vector<int>>& image, int sr, int sc, int newColor,int m,int n,int start){
        if(sr>=m || sc>=n || sr<0 || sc<0 || image[sr][sc]!=start ) return;
        
        image[sr][sc] = newColor;
        solve(image,sr+1,sc,newColor,m,n,start);
        solve(image,sr,sc+1,newColor,m,n,start);
        solve(image,sr-1,sc,newColor,m,n,start);
        solve(image,sr,sc-1,newColor,m,n,start);
        return;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc]==newColor) return image;
        int m=image.size();
        int n=image[0].size();
        int start = image[sr][sc];
        solve(image,sr,sc,newColor,m,n,start);
        return image;
    }
};