class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1;
        int sum = 0;

        while(n){
            int x = n%10;
            n = n/10;

            prod = prod * x;
            sum = sum + x;
        
        }
        int ans = (prod-sum);
        return ans;
    }
};
