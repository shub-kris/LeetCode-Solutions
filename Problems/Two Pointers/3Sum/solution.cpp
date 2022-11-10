class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for(int i = 0; i < n-2; i++){
            if(nums[i] > 0) break;
            if(i >= 1 && nums[i] == nums[i-1]) continue;
            int target = -nums[i];
            int st = i + 1, end = n - 1;
            while(st < end){
                if(nums[st] + nums[end] == target){
                    vector<int> temp = {nums[i], nums[st], nums[end]};
                    res.push_back(temp);

                    while(st < end && nums[st] == nums[st+1]) st++;
                    while(st < end && nums[end] == nums[end-1]) end--;
                    st++, end--;
                }
                else if(nums[st] + nums[end] > target) end--;
                else st++;
            }
        }
        return res;

    }
};