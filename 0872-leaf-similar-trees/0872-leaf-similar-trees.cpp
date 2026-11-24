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
    vector<int> tree1;
    vector<int> tree2;
    void leafNodes(TreeNode* root, vector<int>& tree){

        if(root == NULL){
            return;
        }
        
        if(root->left == NULL && root->right == NULL){
            tree.push_back(root->val);
            return;
        }

        leafNodes(root->left, tree);
        leafNodes(root->right, tree);

    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        leafNodes(root1, tree1);
        leafNodes(root2, tree2);

        return tree1 == tree2;
    }
};