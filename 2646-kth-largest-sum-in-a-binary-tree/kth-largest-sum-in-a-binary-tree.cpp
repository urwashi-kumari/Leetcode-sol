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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        priority_queue <long long> heap;
        queue <TreeNode*> q;
        long long ans = 0;

        q.push(root);

        while(!q.empty()){
            int levelSize = q.size();
            long long sum = 0;

            for(int i = 0; i < levelSize; i++){
                TreeNode *currNode = q.front();
                q.pop();
                sum += currNode -> val;

                if(currNode -> left) q.push(currNode -> left);
                if(currNode -> right) q.push(currNode -> right);
            }
            heap.push(sum);
        }

        if(heap.size() < k) return -1;

        for(int i = 0; i < k; i++){
            ans = heap.top();
            heap.pop();
        }

        return ans;
    }
};