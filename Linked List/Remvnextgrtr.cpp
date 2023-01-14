#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        ListNode* curr=head,*prev=NULL,*temp=NULL;
        while(curr){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        ListNode* ans = new ListNode(-1);
        ans->next=prev;
        temp=ans;
        int max=prev->val;
        while(temp->next){
            if(temp->next->val<max){
                cout<<max;
                temp->next=temp->next->next;
            }else{
                max=temp->next->val;
                temp=temp->next;
            }
        }
        curr=ans->next;
        prev=NULL;
        temp=NULL;
        while(curr){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
        }
};