class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first=INT_MAX;
        int second=INT_MAX;
        for(int x:nums){
            if(first>=x){
                first=x;
            }
            else if(second>=x){
                second=x;
            }
            else return true;
        }
        return false;
        
    }
};