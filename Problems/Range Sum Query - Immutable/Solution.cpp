class NumArray {
public:
    vector<int> cumsum;
    NumArray(vector<int>& nums) {
        int n = nums.size();
        cumsum.resize(n+1);
        cumsum[0] = 0;
        for(int i=0; i < n; i++)
            cumsum[i+1] = cumsum[i] + nums[i];
    }
    
    int sumRange(int left, int right) {
        return cumsum[right+1] - cumsum[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */