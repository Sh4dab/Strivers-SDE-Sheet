#include <bits/stdc++.h> 
bool solve(TreeNode<int> *root, int x,vector<int>& ans){
	if(root==NULL){
		return false;
	}
	if(root->data==x){
		ans.push_back(root->data);
		return true;
	}
	if(root->left){
		if(solve(root->left,x,ans)){
			ans.push_back(root->data);
			return true;
		}
	}
	if(root->right){
		if(solve(root->right,x,ans)){
			ans.push_back(root->data);
			return true;
		}
	}
	return false;
}
vector<int> pathInATree(TreeNode<int> *root, int x)
{
	vector<int> ans;
	solve(root,x,ans);
	reverse(ans.begin(),ans.end());
	return ans;
}
