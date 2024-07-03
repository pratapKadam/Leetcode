class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> final;
        sort(nums.begin(), nums.end());

        for(int i = 0 ; i < nums.size()-2; i++){

            if(i > 0 && nums[i] == nums[i-1]) continue;

            int j = i+1;
            int k = nums.size()-1;

            while(j<k && j < nums.size() && k < nums.size()){
            int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0){
                    vector<int> temp = {nums[i], nums[j] , nums[k]};
                    final.push_back(temp);

                    while(j < k && nums[j]== nums[j+1]) j++;
                    while(j < k && nums[k] == nums [k-1]) k--;

                    j++;
                    k--;
                }
                else if (sum < 0) j++;
                else k--;
            }
        }
        return final;
    }
};
