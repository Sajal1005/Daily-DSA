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
    ListNode* partition(ListNode* head, int x) {
        ListNode* left=new ListNode(-1);
        ListNode* right=new ListNode(-1);
        ListNode* ans1=left,*ans2=right;
        ListNode* temp=head;
        while(temp){
            if(temp->val<x){
                left->next=temp;
                temp=temp->next;
                left=left->next;
            }else if(temp->val>=x){
                right->next=temp;
                temp=temp->next;
                right=right->next;
            }
        }
        left->next=ans2->next;
        right->next = NULL;
        return ans1->next;
    }
};