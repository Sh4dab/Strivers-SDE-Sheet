#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	int sum=0;
	pair<int,int> ans;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            ans.second=arr[i];
            break;
        }
    }
    for(int i=0;i<n;i++){
        sum-=arr[i];
    }
    ans.first=sum+ans.second;
    return ans;
}
