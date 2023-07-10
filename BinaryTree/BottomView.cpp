#include <bits/stdc++.h> 
vector<int> bottomView(BinaryTreeNode<int> * root){
    vector<int> ans;
    if(root==NULL) return ans;
    queue<pair<int,BinaryTreeNode<int>*>>q;
    map<int,int> mp;
    q.push({0,root});
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        int hd=it.first;
        BinaryTreeNode<int> *node=it.second;
        mp[hd]=node->data;
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
