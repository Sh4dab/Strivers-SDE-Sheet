#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    int n=input.length();
    map<char,int> m;
    int left=0;int right=0;
    int len=0;
    while(right<n && left<n){
        
        if(m.find(input[right])!=m.end()){
            left=max(left,m[input[right]]+1);
        }
        len=max(len,right-left+1);
        m[input[right]]=right;
        
        right++;
    }
    return len;
}