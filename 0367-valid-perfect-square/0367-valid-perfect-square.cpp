class Solution {
public:
    bool isPerfectSquare(int num) {
        int low=1;
        int high=num;
        int ans =0;
        while(high>=low){
            long long mid=low+(high-low)/2;
            if(mid*mid==num){
                return true;
                low=mid+1;

            }
            else if (mid * mid < num) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return false;
        
    }
};