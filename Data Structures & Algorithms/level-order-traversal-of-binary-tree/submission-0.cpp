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
    void a(TreeNode* root , vector<vector<int>>&ans ,int l){
        if(root==nullptr){
            return ;
        }
        if(l == ans.size()){
            ans.push_back({});
        }
        ans[l].push_back(root->val);
        a(root->left,ans,l+1);
        a(root->right,ans,l+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int l=0;
        vector<vector<int>>ans;
        a(root,ans,l);
        return ans;
    }
};