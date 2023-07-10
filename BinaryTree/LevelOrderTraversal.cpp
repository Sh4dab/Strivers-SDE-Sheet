#include <bits/stdc++.h> 

vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    queue<BinaryTreeNode<int>*> q;

    q.push(root);
    while(!q.empty()){
        int size=q.size();
        vector<int> level;
        for (int i = 0; i < size; i++) {
          BinaryTreeNode<int> *node = q.front();
          q.pop();
          level.push_back(node->val);
          if (node->left) {
            q.push(node->left);
          }
          if (node->right) {
            q.push(node->right);
          }
        }
        for(auto x:level){
            ans.push_back(x);
        }
    }
    return ans;
}