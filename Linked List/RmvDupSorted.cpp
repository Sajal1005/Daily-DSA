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

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        while(temp && temp->next){
            if(temp->data==temp->next->data){
                temp->next=temp->next->next;
            }else{
                temp=temp->next;
            }
        }
        return head;
    }
};