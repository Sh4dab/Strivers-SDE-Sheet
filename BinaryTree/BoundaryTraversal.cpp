#include <bits/stdc++.h> 

bool isLeaf(TreeNode<int>* root){
    if(!root->left && !root->right){
        return true;
    }
    return false;
}
void leftBoundary(TreeNode<int>* root,vector<int>& ans){
    TreeNode<int>* temp=root->left;
    while(temp){
        if(!isLeaf(temp)) ans.push_back(temp->data);
        if(temp->left) temp=temp->left;
        else temp=temp->right;
    }
}
void rightBoundary(TreeNode<int>* root,vector<int>& ans){
    TreeNode<int>* temp=root->right;
    vector<int> res;
    while(temp){
        if(!isLeaf(temp)) res.push_back(temp->data);
        if(temp->right) temp=temp->right;
        else temp=temp->left;
    }
    for(int i=res.size()-1;i>=0;i--){
        ans.push_back(res[i]);
    }
}
void addleaves(TreeNode<int>* root,vector<int>& ans){
    if(isLeaf(root)){
        ans.push_back(root->data);
        return;
    }
    if(root->left) addleaves(root->left,ans);
    if(root->right) addleaves(root->right,ans);
}

vector<int> traverseBoundary(TreeNode<int>* root){
    vector<int> ans;
    if(!root) return ans;
    if(!isLeaf(root)) ans.push_back(root->data);
    leftBoundary(root,ans);
    addleaves(root,ans);
    rightBoundary(root,ans);
    
    return ans;
}