#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct node{
    int data;
    struct node* next;
    node(int x){
        data = x;
        next = NULL;
    }
};

// LEETCODE (NOT REVERSE LEFT OUT NODES)
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count=0;
        ListNode* temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        int len=0;
        ListNode* curr=head,*prev=NULL;
        temp=NULL;
        while(curr && len<k){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
            len++;
        }
        count-=k;
        if(temp && count>=k){
            head->next=reverseKGroup(temp,k);
        }else{
            head->next=temp;
        }
        return prev;
    }
};

// GFG (REVERSE LEFT OUT NODES)
class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        if(head==NULL){
            return NULL;
        }
        int count=0;
        node* curr=head,*temp=NULL,*prev=NULL;
        while(curr && count<k){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
            count++;
        }
        if(temp){
            head->next=reverse(temp,k);
        }
        return prev;
    }
};