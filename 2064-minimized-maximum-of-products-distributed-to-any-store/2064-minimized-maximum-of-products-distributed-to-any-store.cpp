class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
      int maxi=0;
        for(auto ele:quantities){
          maxi=max(maxi,ele);
      } 
        int start =1,end=maxi;
        while(start<=end){
            int mid = start+(end-start)/2;
            int temp=0;
            for(int i=0;i<quantities.size();i++){
                temp += ceil(1.0*quantities[i]/mid);
                
            }
            if(temp>n)
                start=mid+1;
            else
                end=mid-1;
        }
        return start;
    }
};