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
        unordered_map<int,int> count;
        ListNode* temp = head;
        while(temp!=NULL){
            count[temp->data]++;
            temp=temp->next;
        }
        ListNode* ans = new ListNode(-1);
        ans->next=head;
        temp=ans;
        while(temp->next){
            if(count[temp->next->data]>1){
                temp->next=temp->next->next;
            }else{
                temp=temp->next;
            }
        }
        return ans->next;
    }
};