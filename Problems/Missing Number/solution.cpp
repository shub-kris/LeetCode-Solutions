class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total_sum = (n *(n+1))/2;
        for(auto ele:nums)
            total_sum-=ele;  
        return total_sum;
    }
};