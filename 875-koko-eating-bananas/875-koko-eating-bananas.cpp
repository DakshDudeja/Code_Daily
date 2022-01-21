class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max_ele =0;
        for(auto el:piles){
            max_ele=max(max_ele,el);
        }
        int n=piles.size();
        if(n==h){
            return max_ele;    
        }
        int start=1,end=max_ele;
        while(start<=end){
            int mid=start+(end-start)/2;
            int time=0;
            for(int i=0;i<n;i++){
                time += ceil(1.0*piles[i]/mid);
                
            }
            if(time>h)
                start=mid+1;
            else
                end=mid-1;
        
        }
        return start;
    }
};