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
                ans++;
            }else{
            count=max(count, (ans+1)/2);
            ans=0;
            }
        }
        return max(ans,count);
    }
};