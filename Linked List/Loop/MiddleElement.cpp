#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    public: 
    int data;
    struct ListNode *next;
    ListNode(int x) {
        data = x;
        next = NULL;
    }
};

// USING SLOW AND FAST POINTERS
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head,*fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};

// COUNTING ALL NODES 
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count=0;
        ListNode* temp = head;
        while(temp){
            count++;
            temp=temp->next;
        }
        cout<<count;
        temp=head;
        int m = count/2 ;
        while(m--){
            temp=temp->next;
        }
        return temp;
    }
};