class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int mul=1;
        int g=n;
        int count=0;
        while(n!=0){
            int digit=n%10;
            sum+=digit;
            mul*=digit;
            n=n/10;

        }
        int z= sum+mul;
        if(g%z==0){
            return true;
        }
        return false;
        
    }
};