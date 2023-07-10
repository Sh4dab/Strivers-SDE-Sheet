#include <bits/stdc++.h> 
vector<int> verticalOrderTraversal(TreeNode<int> *root){
    vector<int> ans;
    if(root==NULL) return ans;
    map<int,vector<int>>mp;
    queue<pair<int,TreeNode<int>*>>q;
    q.push({0,root});

    while(!q.empty()){
        auto it=q.front();
        q.pop();
        TreeNode<int>* node=it.second;
        int hd=it.first;
        mp[hd].push_back(node->data);
        if(node->left){
            q.push({hd-1,node->left});
        }
        if(node->right){
            q.push({hd+1,node->right});
        }
    }
    for(auto it: mp){
        for(auto x:it.second){
            ans.push_back(x);
        }
    }
    return ans;
}