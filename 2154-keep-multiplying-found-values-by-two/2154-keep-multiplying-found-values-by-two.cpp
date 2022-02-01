class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        
       vector<int>freq(1001,0);
        for(auto it:nums)
            freq[it]++;
        while(1){
            if(original <=1000 and freq[original]>0) original*=2;
            else
                break;
        }
        return original;
    }
};