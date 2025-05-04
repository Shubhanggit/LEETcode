class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        vector<int> mp(100, 0);
        int result = 0;

        for (auto& d : dominoes) {
            if (d[0] > d[1]) swap(d[0], d[1]);
            int temp = (d[0] * 10) + d[1];
            result += mp[temp];
            mp[temp]++;
        }

        return result;
    }
};