bool searchMatrix(vector<vector<int>>& mat, int target) {
    int m=mat.size();
    int n=mat[0].size();
    int start=0;
    int end=n*m-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(mat[mid/n][mid%n]==target){
            return true;
        }else if(mat[mid/n][mid%n]<target){
            start=mid+1;
        }else if(mat[mid/n][mid%n]>target){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return false;
}