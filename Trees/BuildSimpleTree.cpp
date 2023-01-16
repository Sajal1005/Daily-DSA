#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node*left;
    Node* right;
    Node(int data){
        val=data;
        left=right=NULL;
    }
};

Node* build(Node* root){
    int data;
    cout<<"Enter data"<<endl;
    cin>>data;
    root = new Node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter Left data for "<<root->val<<endl;
    root->left=build(root->left);
    cout<<"Enter Right data"<<root->val<<endl;
    root->right=build(root->right);
    
    return root;
}

void levelOrder(Node* root)
    {
      queue<Node*> q;
      q.push(root);
      q.push(NULL);

      while(!q.empty()){
          Node* front = q.front();
          q.pop();

            if(front==NULL){
                cout<<endl;
                if(!q.empty()){
                    q.push(NULL);
                }
            }else{
                cout<<front->val<<" ";
                if(front->left){
                    q.push(front->left);
                }
                if(front->right){
                    q.push(front->right);
                }
            }
      }
    }

int main()
{
    Node* root = NULL;
    root = build(root);
    levelOrder(root);
    return 0;
}