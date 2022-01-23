class Solution {
public:
    // bool solve(vector<int>& piles,int idx,bool alice,int sumA,int sumB){
    //     if(idx>piles.size()) return false;
    //     if(idx==piles.size()){
    //         if(sumA>sumB) return true;
    //         else
    //             return false;
    //     }
    //     for(int i=0;i<piles.size();i++){
    //         if(alice==true)
    //             solve(piles,idx+1,false,sumA+max(piles[i],piles[piles.size()-1]),sumB);
    //         else
    //             solve(piles,idx+1,true,sumA,sumB+max(piles[i],piles[piles.size()-1]));
    //     }
    // }
    bool stoneGame(vector<int>& piles) {
        // solve(piles,true,0,0)
        return 1;
    }
};