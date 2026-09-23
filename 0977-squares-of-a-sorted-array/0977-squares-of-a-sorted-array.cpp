class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n= nums.size();
        int i = 0 ;
        int j=n-1;
        vector<int>ans(n);
        int index=n-1;
        while(i<=j){
            if(nums[i]*nums[i]<=nums[j]*nums[j]){
                ans[index]=nums[j]*nums[j];
                index--;
                j--;
            }
            else{
                ans[index]=nums[i]*nums[i];
                index--;
                i++;
            }
        }
        return ans;
    }
};