#include<bits/stdc++.h>
using namespace std;

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> ans(n);
  for(long long int i=0;i<n;i++){
    ans[i].resize(i+1);
    ans[i][0]=1;
    ans[i][i]=1;

    for(long long int j=1;j<i;j++){
      ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
    }
  }
  return ans;
}

int main(){
    int n;
    cout<<"Enter number of rows";
    cin>>n;
    vector<vector<long long int>> PascalTriangle;
    PascalTriangle=printPascal(n);
    return 0;
}