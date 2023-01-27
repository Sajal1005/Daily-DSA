#include<bits/stdc++.h>
using namespace std;
struct Node
{   int data;
    struct Node* left;
    struct Node* right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

// BY CALCULATING SIZE(STRIVER'S APPROACH)
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL){
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int lvl = q.size();
            vector<int> v;
            for(int i=0;i<lvl;i++){
                TreeNode* front = q.front();
                q.pop();
                v.push_back(front->val);
                if(front->left){
                    q.push(front->left);
                }
                if(front->right){
                    q.push(front->right);
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};

// BY USING SEPERATOR
class Solution
{
    public:
    vector<int> levelOrder(Node* root)
    {
      vector<int> v;
      if(!root){
          return v;
      }
      queue<Node*> q;
      q.push(root);
      while(!q.empty()){
          Node* front = q.front();
          v.push_back(front->data);
          q.pop();
          if(front->left){
              q.push(front->left);
          }
          if(front->right){
              q.push(front->right);
          }
      }
      return v;
    }
};