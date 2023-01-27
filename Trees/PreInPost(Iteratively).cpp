#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL){return ans;}
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty()){
            TreeNode* front = s.top();
            s.pop();
            ans.push_back(front->val);
            if(front->left){
                s.push(front->left);
            }
            if(front->right){
                s.push(front->right);
            }
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL){return {};}
        vector<int> ans;
        stack<TreeNode*> s;
        TreeNode* node = root;
        
        while(true){
            if(node){
                s.push(node);
                node=node->left;
            }else{
                if(s.empty()){break;}
                node = s.top();
                s.pop();
                ans.push_back(node->val);
                node=node->right;
            }
        }
        return ans;
    }
};

// USING 2 STACK
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL){return {};}
        stack<TreeNode*> s1,s2;
        s1.push(root);
        while(!s1.empty()){
            TreeNode* front = s1.top();
            s1.pop();
            s2.push(front);
            if(front->left){
                s1.push(front->left);
            }
            if(front->right){
                s1.push(front->right);
            }
        }
        while(!s2.empty()){
            ans.push_back(s2.top()->val);
            s2.pop();
        }
        return ans;
    }
};
