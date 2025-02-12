class Solution {
public:
    int sum(int n) {
        int ans = 0;
        while (n > 0) {
            ans += n % 10;
            n /= 10;
        }
        return ans;
    }

    int maximumSum(vector<int>& nums) {
        int ans = -1;
        sort(nums.begin(), nums.end());
        unordered_map<int, vector<int>> m;
        for (auto el : nums) {
            int s = sum(el);
            if (m[s].size() < 2)
                m[s].push_back(el);
            else {
                m[s][0] = m[s][1];
                m[s][1] = el;
            }
            if (m[s].size() == 2)
                ans = max(ans, m[s][0] + m[s][1]);
        }
        return ans;
    }
};