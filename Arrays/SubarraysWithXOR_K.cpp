#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    int xr=0; int count=0;
    map<int,int> m;
    m[xr]++;
    for(int i=0;i<arr.size();i++){
        xr=xr^arr[i];
        int z=xr^x;
        count+=m[z];
        m[xr]++;
    }
    return count;
}