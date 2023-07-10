#include <bits/stdc++.h> 

int solve(BinaryTreeNode<int>* root){
    if(root==NULL){
        return 0; 
    }
    int lefth=0,righth=0;
    if(root->left){
        lefth=solve(root->left);
    }   
    if(root->right){
        righth=solve(root->right);
    }
    if(lefth==-1||righth==-1) return -1;
    if(abs(lefth-righth)>1){
        return -1;
    }
    return 1+max(lefth,righth);
}

bool isBalancedBT(BinaryTreeNode<int>* root) {
    return solve(root)==-1 ? false:true;
}