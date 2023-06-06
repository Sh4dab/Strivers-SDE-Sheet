#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	int cnt=0;
	int el=0;
	//boyer moores voting
	for(int i=0;i<n;i++){
		if(cnt==0){
			el=arr[i];
			cnt=1;
		}else if(el==arr[i]){
			cnt++;
		}else{
			cnt--;
		}
	}
	cnt=0;
	for(int i=0;i<n;i++){
		if(arr[i]==el) cnt++;
	}
	if(cnt>n/2) return el;
	return -1;
}