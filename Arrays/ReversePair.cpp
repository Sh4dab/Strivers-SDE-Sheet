#include <bits/stdc++.h>

void merge(vector<int>& nums,int low,int mid,int high){
    int left=low;
    int right=mid+1;
    vector<int> temp;
    while(left<=mid && right<=high){
        if(nums[left]<=nums[right]){
            temp.push_back(nums[left++]);
        }else{
            temp.push_back(nums[right++]);
        }
    }
    while(left<=mid){
        temp.push_back(nums[left++]);
    }
    while(right<=high){
        temp.push_back(nums[right++]);
    }
    for (int i=low;i<=high;i++){
        nums[i] = temp[i-low];
    }
}
int countPairs(vector<int> &nums,int low,int mid,int high){
	int cnt = 0;
  	int j=mid+1;
    for (int i=low;i<=mid;i++) {
        while (j<=high && nums[i] >(long long)2*nums[j]) {
            j++;
        }
    cnt+= j-(mid + 1);
  }
  return cnt;
}
int merge_sort(vector<int>& nums,int low,int high){
    int count=0;
    if(low>=high) return count;
    int mid=(low+high)/2;
    count+=merge_sort(nums,low,mid);
    count+=merge_sort(nums,mid+1,high);
    count+=countPairs(nums,low,mid,high);
    merge(nums,low,mid,high);
    return count;
}

    int reversePairs(vector<int>& nums) {
        return merge_sort(nums,0,nums.size()-1);
    }