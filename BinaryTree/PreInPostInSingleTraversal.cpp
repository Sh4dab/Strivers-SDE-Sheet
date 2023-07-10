#include <bits/stdc++.h> 

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    vector<int> pre,ino,post;
    stack<pair<BinaryTreeNode<int> *,int>> st;
    if(root==NULL) return {};
    st.push({root,1});
    while(!st.empty()){
        auto it=st.top();
        st.pop();
        if(it.second==1){
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->left){
              st.push({it.first->left, 1});
            }
        }else if (it.second == 2) {
          ino.push_back(it.first->data);
          it.second++;
          st.push(it);
          if (it.first->right) {
            st.push({it.first->right, 1});
          }
        } else {
          post.push_back(it.first->data);
        }
    }
    return {ino,pre,post};
}