#include<iostream>
using namespace std;

struct Node
{
    public: 
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

int countNodesinLoop(struct Node *head)
{
    // Code here
    Node* slow=head,*fast=head;
    bool flag=false;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            flag=true;
            break;
        }
    }
    if(!flag){
        return 0;
    }else{
        Node* temp = slow->next;
        int count=1;
        while(temp!=slow){
            count++;
            temp=temp->next;
        }
        return count;
    }
}