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
    vector<string> bfs(TreeNode* root){
        queue<TreeNode*> q;
        vector<string> ans;
        q.push(root);
        while(!q.empty()){
            int len=q.size();
            for(int i=0;i<len;i++){
                TreeNode* curr = q.front();
                q.pop();
                if(curr){
                    ans.push_back(to_string(curr->val));
                    q.push(curr->left);
                    q.push(curr->right);
                }
                else{
                    ans.push_back("#");
                }
            }
        }
        return ans;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<string> res1=bfs(p);
        vector<string> res2=bfs(q);
        for(int i=0;i<res1.size();i++){
            if(res1[i]!=res2[i]){
                return false;
            }
        }
        return true;
    }
};