class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int max_fruits = 0, k = 0;
        unordered_map<int,int> mp;
        for(int i = 0; i < n; i++){
            mp[fruits[i]]++;
            while(mp.size() > 2){
                mp[fruits[k]]--;
                if(!mp[fruits[k]]) mp.erase(fruits[k]);
                k++;
            }
            int cur_fruits_count = 0;
            max_fruits = max(max_fruits, i-k+1);
            // cout << max_fruits << endl;
        }
        return max_fruits;

    }
};