#include<bits/stdc++.h>
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

// USING TWO FOR LOOPS (Time Limit Exceeded)
class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     Node* temp=head;
     while(temp){
         Node* temp2=temp;
         while(temp2->next){
             if(temp2->next->data==temp->data){
                 temp2->next=temp2->next->next;
             }else{
                 temp2=temp2->next;
             }
         }
        temp=temp->next;
     }
     return head;
    }
};

// USING HASHSET
class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list using hashset.
    Node * removeDuplicates( Node *head) 
    {
     unordered_set<int> s;
     Node* temp=head;
     s.insert(head->data);
     while(temp->next){
         if(s.find(temp->next->data)!=s.end()){
                temp->next=temp->next->next;
            }else{
                s.insert(temp->next->data);
                temp=temp->next;
            }
        }
        return head;
    }
};
