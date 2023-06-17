#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   int n=arr.size();
   vector<vector<int>> ans;
   unordered_map<int,int>mp;
   for(int i=0;i<n;i++){
      if(mp[s-arr[i]]){
         int x=mp[s-arr[i]];
         vector<int> output;
         while(x--){
            output.push_back(min(arr[i],s-arr[i]));
            output.push_back(max(arr[i],s-arr[i]));
            ans.push_back(output);
         }
      }
      mp[arr[i]]++;
   }
   sort(ans.begin(),ans.end());

   return ans;
}