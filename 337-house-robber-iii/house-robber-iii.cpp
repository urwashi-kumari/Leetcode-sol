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
    pair<int,int> dfs(TreeNode* root){
        int ans1=0;
        int ans2=0;
        pair<int,int>chck1{0,0},chck2={0,0};
        if(root->left!=NULL){
            chck1=dfs(root->left);
        }
        if(root->right!=NULL){
            chck2=dfs(root->right);
        }
        return {root->val + chck1.second+chck2.second, max(chck1.first,chck1.second)+max(chck2.first,chck2.second)};
    }
    int rob(TreeNode* root){
        int take=0,nontake=0;
        pair<int,int>final=dfs(root);
        return max(final.first,final.second);
    }
};