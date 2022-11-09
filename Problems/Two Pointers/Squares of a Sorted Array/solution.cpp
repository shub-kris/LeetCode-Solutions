class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size(), st = 0, end = n - 1;
        int k = n - 1;
        vector<int> squares(n, -1);
        while(k != -1){
            if(nums[st] * nums[st] < nums[end] * nums[end]){
                squares[k--] = nums[end] * nums[end];
                end--;
            }
            else{
                squares[k--] = nums[st] * nums[st];
                st++;
            }
        }
        return squares;
    }
};