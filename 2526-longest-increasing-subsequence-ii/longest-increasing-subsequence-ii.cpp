class Solution {
public:
    int lengthOfLIS(vector<int>& nums, int k) {
        int n = 200000;
        int tree[400000] = {0};

        auto update = [&](int idx, int y) {
            idx += n;
            tree[idx] = y;
            while (idx > 0) {
                idx >>= 1;
                tree[idx] = max(tree[idx << 1], tree[idx << 1 | 1]);
            }
        };

        auto query = [&](int l, int r) {
            l = max(l, 0);
            l += n;
            r += n;
            int mx = 0;
            while (l < r) {
                if (l & 1) {
                    mx = max(mx, tree[l++]);
                }
                if (r & 1) {
                    mx = max(mx, tree[--r]);
                }
                l >>= 1;
                r >>= 1;
            }
            return mx;
        };

        for (int i = 0; i < nums.size(); i++) {
            int c = query(nums[i] - k, nums[i]) + 1;
            update(nums[i], c);
        }

        int max_length = 0;
        for (int i = 1; i <= 100000; i++) {
            max_length = max(max_length, tree[i + n]);
        }
        return max_length;
    }
};