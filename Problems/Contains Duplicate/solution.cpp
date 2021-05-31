class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        bool duplicate=false;
        int n = nums.size();
        for(int i=1; i<n; i++){
            if(nums[i]==nums[i-1]){
                duplicate=true;
                break;
            }
        }
        return duplicate;
        
    }
};