#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// RECURSIVE
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head){
            return head;
        }
        int count=0;
        ListNode* curr=head,*prev=NULL,*temp=NULL;
        while(curr && count<2){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
            count++;
        }
        if(temp){
            head->next=swapPairs(temp);
        }
            return prev;
        
    }
};

// ITERATIVE
