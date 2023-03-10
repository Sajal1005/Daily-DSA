#include<iostream>
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
    // try symmetric tree problem
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL){
            return true;
        }
        if((!p && q) || (!q && p)){
            return false;
        }
        bool l = isSameTree(p->left,q->left);
        bool r = isSameTree(p->right,q->right);
        bool curr = p->val==q->val;
        if(l && r && curr){
            return true;
        }
        return false;
    }
};