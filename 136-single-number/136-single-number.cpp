class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        for(int k:nums){
            x=x^k;
        }
        return x;
    }
};