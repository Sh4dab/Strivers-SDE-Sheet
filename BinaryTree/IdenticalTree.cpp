#include <bits/stdc++.h> 

bool identicalTrees(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
    if(!root1 && !root2) return true;
    if(!root1 || !root2) return false;
    if(root1->data!=root2->data){
        return false;
    }
    bool lefttree=identicalTrees(root1->left, root2->left);
    bool righttree=identicalTrees(root1->right,root2->right);

    return lefttree&&righttree;
}