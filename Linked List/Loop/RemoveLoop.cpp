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

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node* slow= head,*fast=head;
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
            return;
        }else{
            if(slow==head){
                while(fast->next!=slow){
                    fast=fast->next;
                }
            }else{
                slow=head;
                while(fast->next!=slow->next){
                    slow=slow->next;
                    fast=fast->next;
                }
            }
            fast->next=NULL;
        }
    }
};