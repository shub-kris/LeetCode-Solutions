class Solution {
public:
    int sum_digits(int n){
        int sum_dig = 0;
        while(n){
            int rem = n%10;
            sum_dig += rem * rem;
            n /= 10;
        }
        return sum_dig;
    }
    bool isHappy(int n) {
        if(!n) return false;
        if(n==1) return true;
        unordered_map<int,int> dict_sum;
        int slow = n, fast = n;
        while(true){
            if(dict_sum.find(slow) == dict_sum.end()) dict_sum[slow] = sum_digits(slow);
            slow = dict_sum[slow];
            if(dict_sum.find(fast) == dict_sum.end()) dict_sum[fast] = sum_digits(fast);
            fast = sum_digits(dict_sum[fast]);
            if(slow == 1 || fast == 1) return true;
            if(slow == fast) return false;
        }
    }
};