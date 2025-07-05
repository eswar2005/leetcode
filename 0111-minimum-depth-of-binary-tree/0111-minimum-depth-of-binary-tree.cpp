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
    int bfs(TreeNode* root){
        queue<TreeNode*> q;
        vector<string> ans;
        int cnt=0;
        q.push(root);
        while(!q.empty()){
            int len=q.size();
            cnt++;
            for(int i=0;i<len;i++){
                TreeNode* curr = q.front();
                q.pop();
                if(curr){
                    ans.push_back(to_string(curr->val));
                    if(!curr->left && !curr->right){
                        return cnt;
                    }
                    q.push(curr->left);
                    q.push(curr->right);
                }
                // else{
                //     ans.push_back("#");
                // }
            }
        }
        return cnt-1;
    }
    int minDepth(TreeNode* root) {
        return bfs(root);
    }
};