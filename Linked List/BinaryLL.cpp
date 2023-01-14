#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// BY LENGTH COUNT
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int count=0,ans=0;
        ListNode* temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        count--;
        temp=head;
        while(temp){
            ans+=(pow(2,count)*temp->val);
            temp=temp->next;
            count--;
        }
        return ans;
    }
};

// BY ONE ITERATION
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* curr=head;
        int sum=0;
        while(curr){
            sum=sum*2;
            sum+=curr->val;
            curr=curr->next;
        }
        return sum;
    }
};