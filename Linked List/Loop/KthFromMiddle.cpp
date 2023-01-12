#include<iostream>
using namespace std;

struct listnode {
      int val;
      struct listnode *next;
  };

listnode* listnode_new(int val) {
      listnode* node = (listnode *) malloc(sizeof(listnode));
      node->val = val;
      node->next = NULL;
      return node;
  }

  int solve(listnode* head, int B) {
    if(!head || (!head->next && B>0)){
        return -1;
    }
    listnode* slow=head,*fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    listnode* curr=head,*prev=NULL,*temp=NULL;
    while(curr){
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    while(B--){
        if(slow==NULL){
            return -1;
        }
        slow=slow->next;
    }
    return slow->val;
}


