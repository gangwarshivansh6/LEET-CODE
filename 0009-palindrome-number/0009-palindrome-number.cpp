class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int n=x;
        long rev_no=0;
        while(n>0){
            int d=n%10;
            rev_no=(rev_no*10)+d;
            n=n/10;
        }
        if(rev_no==x){
            return true;
        }
        else return false;
    }
        
};