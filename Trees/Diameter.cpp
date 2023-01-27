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
    int dia(TreeNode* root, int &maxi){
        if(root==NULL){
            return 0;
        }
        int l = dia(root->left,maxi);
        int r = dia(root->right,maxi);
        maxi = max(maxi,l+r);
        return max(l,r)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
        int ans = dia(root,maxi);
        return maxi;
    }
};