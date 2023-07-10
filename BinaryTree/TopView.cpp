#include <bits/stdc++.h> 

vector<int> getTopView(TreeNode<int> *root) {
    vector<int> ans;
    if(root==NULL) return ans;
    queue<pair<int,TreeNode<int>*>>q;
    map<int,int> mp;
    q.push({0,root});
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        int hd=it.first;
        TreeNode<int> *node=it.second;
        if(mp.find(hd)==mp.end()){
                mp[hd]=node->val;
            }
        if(node->left){
            q.push({hd-1,node->left});
        }
        if(node->right){
            q.push({hd+1,node->right});
        }
    }
    for(auto it:mp){
        ans.push_back(it.second);
    }
    return ans;
}