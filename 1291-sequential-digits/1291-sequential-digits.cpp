class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        int sum=0,temp=0;
        int power=2;
        for(int i=1;i<9;i++){
            temp=0;
        for(int j=i;j<=9;j++){
            temp= temp*10+j;
            
            if(temp>=low and temp<=high)
                ans.push_back(temp);
             
        }
    }
        sort(ans.begin(),ans.end());
        return ans;
    }
};