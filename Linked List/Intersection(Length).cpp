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

// BY CALCULATING LENGTHS OF LISTS
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=0;
        int l2=0;
        ListNode* temp=headA;
        while(temp){
            l1++;
            temp=temp->next;
        }
        temp=headB;
        while(temp){
            l2++;
            temp=temp->next;
        }
        int d = abs(l1-l2);
        if(l1>l2){
            while(d--){
                headA=headA->next;
            }
        }else if(l2>l1){
            while(d--){
                headB=headB->next;
            }
        }
        while((headA!=headB)){
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
    }
};

// BY INTERCHANGING HEADS
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a=headA,*b=headB;
        while(a!=b){
            if(a==NULL){
                a=headA;
            }else{
                a=a->next;
            }
            if(b==NULL){
                b=headB;
            }else{
                b=b->next;
            }
        }
        return b;
    }
};