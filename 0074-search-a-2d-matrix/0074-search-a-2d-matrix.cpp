class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int a= matrix.size();
            int z=matrix[0].size();
            int low=0;
            int high=a*z-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                int m=mid/z;
                int n=mid%z;
                if(target==matrix[m][n]){
                    return true;
                }
                else if(target>matrix[m][n]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            return false;
    }
};