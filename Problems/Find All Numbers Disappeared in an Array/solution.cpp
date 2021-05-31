class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> missing;
        int n = nums.size();
        unordered_set<int> uniq;
        for(auto num:nums)
            uniq.insert(num);
        for(int i=1; i<=n; i++)
            if(uniq.find(i) == uniq.end())
                missing.push_back(i);
        return missing;
    }
};