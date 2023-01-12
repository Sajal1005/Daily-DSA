#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// USING LENGTH
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode* temp=head,*prev=NULL;
        while(temp){
            count++;
            temp=temp->next;
        }
        temp=head;
        int x=count-n;
        while(x--){
            prev=temp;
            temp=temp->next;
        }
        if(!prev){
            return head->next;
        }
        prev->next=prev->next->next;
        return head;
    }
};

// USING POINTERS
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast=head,*slow=head;
        for(int i=0;i<n;i++){
            fast=fast->next;
        }
        if(!fast){
            return head->next;
        }
        while(fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};