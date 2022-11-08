class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int st = -1, max_len = 0;
        for(int i = 0; i < n; i++){
            if(nums[i]){
                if(st == -1) st = i;
                int cur_len = i - st + 1;
                max_len = max(cur_len, max_len);
            }
            else
                st = -1;
        }

        return max_len;
    }
};