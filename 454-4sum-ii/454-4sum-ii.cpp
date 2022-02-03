class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        sort(nums3.begin(),nums3.end());
        sort(nums4.begin(),nums4.end());
        unordered_map<int,int>mp;
        for(int i=0;i<nums3.size();i++){
            for(int j=0;j<nums4.size();j++){
                mp[nums3[i]+nums4[j]]++;
            }
        }   
        int cnt=0;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                int tmp = 0 - nums1[i]-nums2[j];
                // cout<<tmp<<endl;
                if(mp.find(tmp)!=mp.end())
                    cnt=cnt+mp[tmp];
                
            }
        }
        return cnt;
    }
};