class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size() < 4)
            return {};
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i = 0; i < n-3; i++){
            for(int j = i+1; j < n-2; j++){
                int st = j+1, end = n-1;
                while(st < end){
                    long long int sum = (long)nums[i]+nums[j]+nums[st]+nums[end];
                    if(sum == target){
                        ans.push_back({nums[i], nums[j], nums[st], nums[end]});
                        while(st < end && nums[st] == nums[st+1]) st++;
                        while(st < end && nums[end] == nums[end-1]) end--;
                        st++, end--;
                    }
                    else if(sum < target) st++;
                    else end--;
                }
                while(j < n-2 && nums[j] == nums[j+1]) j++;
            }
            while(i < n-3 && nums[i] == nums[i+1]) i++;
        }
        return ans;
    }
};