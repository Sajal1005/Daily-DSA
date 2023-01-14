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
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> s;
        ListNode* temp = head;
        while(temp){
            if(s.find(temp) != s.end()){
                return true;
            }
            s.insert(temp);
            temp = temp->next;
        }
        return false;
    }
};