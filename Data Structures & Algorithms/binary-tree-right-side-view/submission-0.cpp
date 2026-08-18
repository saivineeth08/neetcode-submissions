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
    vector<int> sol (TreeNode* root , int c , vector<int>& ans){
        if(root==nullptr){
            return ans;
        }
        if(ans.size()==c){
            ans.push_back(root->val);
        }
        sol(root->right,c+1,ans);
        sol(root->left,c+1,ans);
        return ans;
    }
    vector<int> rightSideView(TreeNode* root) {
        int c =0;
        vector<int>ans;
        return sol(root,c,ans);
    }
};