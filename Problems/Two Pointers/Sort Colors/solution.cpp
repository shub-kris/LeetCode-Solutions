
// Solution 1
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int st = 0, mid = 0, end = n-1;
        while(mid <= end){
            if(!nums[mid]) swap(nums[st++], nums[mid++]);
            else if(nums[mid] ==1) mid++;
            else swap(nums[mid], nums[end--]);
        }
    }
};

// Solution 2

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int count0 = 0, count1 = 0, count2 = 0;
        for(int i = 0; i < n; i++){
            if(!nums[i]) count0++;
            else if(nums[i] == 1) count1++;
        }
        count2 = n - count0 - count1;
        int k = 0;
        while(count0--) nums[k++] = 0;
        while(count1--) nums[k++] = 1;
        while(count2--) nums[k++] = 2;
    }
};

