/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// Leetcode accepted solution
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if(root==NULL)
        {
            return root;
        }
        vector<int>v;
        inorder(root,v);
        vector<int>::iterator it;
        for(it=v.begin();it!=v.end()-1;it++)
        {
            if(*it >= *(it+1)) // writing *(it+1) is very imp NOT *it + 1
            {
                return false;
            }
        }
        return true;
    }
    void inorder(TreeNode*root,vector<int>&v)
    {
        if(root!=NULL)
        {   inorder(root->left,v);
            v.push_back(root->val);
            inorder(root->right,v);
        }
    }
};
