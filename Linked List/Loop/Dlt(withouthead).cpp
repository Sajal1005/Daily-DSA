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
    void deleteNode(ListNode* node) {
        node->data=node->next->data;
        node->next=node->next->next;
    }
};