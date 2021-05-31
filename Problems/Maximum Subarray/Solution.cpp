class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0];
        int maxsum = sum;
        for(int i=1; i < n; i++){
            sum = max(sum+nums[i], nums[i]);
            maxsum=max(maxsum, sum);
        }
        return maxsum;   
    }
};