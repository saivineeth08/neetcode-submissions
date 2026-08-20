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
class Solution {
public:
    int maxi=INT_MIN;
    int ans(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int left = ans(root->left);
        int right = ans(root->right);
        maxi=max(maxi,root->val + left + right);
        if(root->val+max(left,right) < 0){
            return 0;
        }
        else{
            return root->val+max(left,right);
        }
    }
    int maxPathSum(TreeNode* root) {
        ans(root);
        return maxi;
    }
};