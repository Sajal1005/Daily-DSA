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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* left=new ListNode(-1);
        ListNode* right=new ListNode(-1);
        ListNode* temp=head,*l1=left,*l2=right;
        int count=1;
        while(temp){
            if(count%2!=0){
                l1->next=temp;
                l1=l1->next;
                temp=temp->next;
                count++;
            }else{
                l2->next=temp;
                l2=l2->next;
                temp=temp->next;
                count++;
            }
        }
        l1->next=right->next;
        l2->next=NULL;
        return left->next;

    }
};