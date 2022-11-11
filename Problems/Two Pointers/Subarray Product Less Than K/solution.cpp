class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0, prod = 1, st = 0;
        for(int i = 0; i < n; i++){
            prod *= nums[i];
            while(prod >=k && st <= i)
                prod /= nums[st++];
            cnt += (i-st) + 1;
        }
        return cnt;
    }
};