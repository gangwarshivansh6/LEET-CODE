class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0 , j = 0;
        int n = nums.size();
        int count = 1;
        while(j<n){
            if(nums[i]==nums[j]){
                //nums.erase(nums.begin()+j);
                j++;
                
            }
            else{
                nums[i+1]=nums[j];
                i++,j++;
                count += 1;
            }
        }
        return count ;
        
    }
};