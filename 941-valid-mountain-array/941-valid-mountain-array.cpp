class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int idx=0;
        bool temp=false;
        if(arr.size()<3) return false;
        for(int i=1;i<arr.size();i++){
            if(arr[i]>arr[i-1]){
                temp=true;
                idx++;
            }               
            else
                break;
        }
        if(temp==false || idx>=arr.size()-1) return false;
        for(int i=idx;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1])
                temp=true;
            else{
                temp=false;
                break;
            }
        }
        return temp;
    }
};