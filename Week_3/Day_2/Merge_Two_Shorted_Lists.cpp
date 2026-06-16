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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        vector<int>ans;
        if(list1==NULL && list2==NULL){
            return NULL;
        }
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }

        while(list1){
            ans.push_back(list1->val);
            list1=list1->next;
        }

        while(list2){
            ans.push_back(list2->val);
            list2=list2->next;
        }

        sort(ans.begin(),ans.end());

        ListNode *head=new ListNode(ans[0]);
        ListNode *temp=head;

        for(int i=1;i<ans.size();i++){
            temp->next=new ListNode(ans[i]);
            temp=temp->next;
        }

        return head;

        
    }
};
