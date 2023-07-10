#include <bits/stdc++.h> 

//iterative-

vector<int> getPreOrderTraversal(TreeNode *root){

    TreeNode* temp=root;
    vector<int> ans;
    stack<TreeNode*> st;
    while(true){
        if(temp!=NULL){
            ans.push_back(temp->data);
            st.push(temp);
            temp=temp->left;
        }else{
            if(st.empty()) break;
            temp=st.top();
            st.pop();
            temp=temp->right;
        }
    }
    return ans;
}