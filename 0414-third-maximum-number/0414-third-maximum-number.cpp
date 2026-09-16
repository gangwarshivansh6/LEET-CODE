class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_map<int , int >mp;
        sort(nums.begin(),nums.end());
        for(int x:nums){
            mp[x]++;
        }nums.clear();
        for(auto x:mp){
            nums.push_back(x.first);
        }
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==1) return nums[0];
        if(n==2) return nums[1];
        return nums[n-3];

        
    }
};