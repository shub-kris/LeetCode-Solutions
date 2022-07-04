class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector <int> res;
        int n = digits.size();
        int carry = 1;
        int sum = 0;
        for(int i = n-1; i>=0; i--){
            sum = digits[i] + carry;
            carry = sum / 10;
            res.push_back(sum % 10);
        }
        if (carry)
            res.push_back(carry);
        reverse(res.begin(), res.end());
        return res;
    }
};