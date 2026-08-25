class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
    int j=k;
    while (true){
        if(find(nums.begin(),nums.end(),j)==nums.end()){
            return j;
            
        }
        j=j+k;
    }
    }
};