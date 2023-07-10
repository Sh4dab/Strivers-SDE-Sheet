
int solve(TreeNode<int>* root,int &ans){
    if(root==NULL){
        return 0;
    }
    int lefth=0,righth=0;
    if(root->left){
        lefth=solve(root->left,ans);
    }
    if(root->right){
        righth=solve(root->right,ans);
    }
    ans=max(ans,lefth+righth);
    return 1+max(lefth,righth);
}

int diameterOfBinaryTree(TreeNode<int> *root){
    int ans=0;
    solve(root,ans);
    return ans;
}
