class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        int st = 0, end = n-1;
        while(st < n-1){
            if(nums[st] > nums[st+1])
                break;
            st++;
        }
        if(st == n-1) return 0;
        while(end >= 0){
            if(nums[end] < nums[end-1])
                break;
            end--;
        }
        int maxi = nums[st], mini = nums[st];
        for(int idx = st+1; idx < end+1; idx++){
            if(nums[idx] > maxi) maxi = nums[idx];
            if(nums[idx] < mini) mini = nums[idx];
        }
        for(int i = 0; i < st; i++){
            if(nums[i] > mini){
                st = i;
                break;
            }
        }

        for(int i = n-1 ; i >= end+1; i--){
            if(nums[i] < maxi){
                end = i;
                break;
            }
        }
        return end - st + 1;
    }
};