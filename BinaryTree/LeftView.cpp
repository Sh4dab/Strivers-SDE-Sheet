#include <bits/stdc++.h> 

vector<int> getLeftView(TreeNode<int> *root){
    queue<pair<int,TreeNode<int>*>> q;
    map<int,vector<int>> mp;
    vector<int> ans;
    if(root==NULL) return ans;
    q.push({0,root});

    while(!q.empty()){
        auto it=q.front();
        q.pop();
        int lvl=it.first;
        TreeNode<int>* node=it.second;
        if(mp.find(lvl)==mp.end())
            mp[lvl].push_back(node->data);
        if(node->left){
            q.push({lvl+1,node->left});
        }
        if(node->right){
            q.push({lvl+1,node->right});
        }
    }
    for(auto it: mp){
        ans.push_back(it.second[0]);
    }
    return ans;
}