class Solution {
public:
    int reverse(int x) {
        int digit, ans =0;

        while(x){
            digit = x%10;
            x = x/10;

            if((ans< INT_MIN/10) || (ans > INT_MAX/10)){
                return 0;
            }

            ans =  (ans*10) + digit;
        }
        return ans;
    }
};
