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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> s;
        ListNode* temp =headA;
        while(temp){
            s.insert(temp);
            temp=temp->next;
        }
        temp= headB;
        while(temp){
            if(s.find(temp) != s.end()){
                return temp;
            }
            temp=temp->next;
        }
        return NULL;
    }
};