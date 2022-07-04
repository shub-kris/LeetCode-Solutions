class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> res;
        unordered_map<int, int> sum;
        for(int i=0; i< n; i++){
            int rem_sum = target-nums[i];
            if(sum.find(rem_sum) != sum.end()){
                res = {i, sum[rem_sum]};
                break;
            }
            else
                sum[nums[i]] = i;
        }
        return res;
    }
};