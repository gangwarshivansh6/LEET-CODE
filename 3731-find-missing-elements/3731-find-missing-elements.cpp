class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(), nums.end());
        int size=nums.size();
        int i=nums[0];
        int j=nums[size-1];
        for(int x=i;x<=j;x++ ){
            bool found =false;
            for(int h=0;h<size;h++){
                if(x==nums[h]){
                    found=true;
                    break;
                }
            }
            if(found==false){
                ans.push_back(x);
            }
        }
        return ans;
    }
};