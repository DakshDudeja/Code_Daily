class Solution {
public:
    int arrangeCoins(int n) {
        if(n==1) return 1;
       long low=0,high=n,mid=0;
        while(low<=high){
             mid= low + (high-low)/2;
            long target = (mid*(mid+1))/2;
            if(target  == n)
                return (int)mid;
            if(target < n)
                low=mid+1;
            else
                high=mid-1;
                
        }
        return (int)high;
    }
};