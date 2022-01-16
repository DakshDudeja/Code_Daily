class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n=seats.size();
        int count=0;
        int ans=0;
        //if starts from 0
        while(seats[count]==0){
            count++;
        }
        for(int i=0;i<n;i++){
            if(seats[i]==0){
                count++;
            }else{
            ans=max(ans, (count+1)/2);
            count=0;
            }
        }
        return max(ans,count);
    }
};