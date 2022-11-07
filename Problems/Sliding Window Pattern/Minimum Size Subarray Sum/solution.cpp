class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int k = 0, win_sum = 0, total_sum = 0;
        int min_len = n;
        for(int i = 0; i < n; i++){
            win_sum += nums[i];
            while(win_sum >= target){
                int cur_len = i - k + 1;
                if(min_len > cur_len)
                    min_len = cur_len;
                win_sum -= nums[k++];
            }
            total_sum += nums[i];
        }
        // cout << min_len
        return target > total_sum ? 0 : min_len;
    }
};