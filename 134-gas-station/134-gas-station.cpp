class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int total_cost=0,total_fuel=0,n=cost.size();
        for(int i=0;i<n;i++)
        {
            total_cost+=cost[i];
            total_fuel+=gas[i];
        }
        // If the total fuel is lesser than the cost then definitely we can't cover the whole cicular tour.
        if(total_fuel<total_cost)
        {
            return -1;
        }
        int temp=0,idx=0;
        for(int i=0;i<gas.size();i++){
            
            if(temp<0){
                idx=i;
                temp=0;
            }
            temp+=gas[i]-cost[i];
        }
        return idx;
    }
};