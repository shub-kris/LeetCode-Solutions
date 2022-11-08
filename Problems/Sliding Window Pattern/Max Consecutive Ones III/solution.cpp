class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int st = 0, max_ones = 0, num_zeroes = 0;
        for(int i = 0; i < n; i++){
            if(!nums[i]) num_zeroes++;
            while(num_zeroes > k)
                if(!nums[st++]) num_zeroes--;
            max_ones = max(max_ones, i - st + 1);
        }
        return max_ones;
    }
};