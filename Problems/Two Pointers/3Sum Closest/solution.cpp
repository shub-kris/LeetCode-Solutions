class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int closest_diff = 500001;
        for(int i = 0; i < n-2; i++){
            int st = i+1, end = n-1;
            while(st < end){
                int triplet_sum = nums[i] + nums[st] + nums[end];
                if(triplet_sum == target) return target;
                else if(triplet_sum < target) st++;
                else end--;
                if(abs(target - triplet_sum) < abs(closest_diff)) closest_diff = target-triplet_sum;
            }
        }
        return target-closest_diff;
    }
};