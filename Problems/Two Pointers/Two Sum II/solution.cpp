class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int st = 0, end = numbers.size() - 1;
        vector<int> res;
        while(st < end){
            int cur_sum = numbers[st] + numbers[end];
            if(cur_sum == target) break;
            else if(cur_sum > target) end--;
            else st++;
        }
        res.push_back(st+1);
        res.push_back(end+1);
        return res;
    }
};