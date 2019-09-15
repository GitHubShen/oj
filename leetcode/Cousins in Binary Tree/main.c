/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        map <int,int> recordFather, recordDepth;
        
    }

private:
    void dfs(TreeNode* root){
        if (root == null){
            return
        }
        if ( root->left != null){
            dfs(root->left)
        }
        if (root->right != null){
            dfs(root->right)
        }
        
    }
};