/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
    vector<int>arr;
        ListNode* temp = head;
        while(temp){
            arr.push_back(temp->val);
            temp= temp->next;
        }
        int m=arr.size(),ans=0;
        for(int i=0,j=m-1;i<m/2,j>=m/2;i++,j--){
            ans=max(ans,arr[i]+arr[j]);
        }
        return ans;
    
    }
};