class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> a;

        for (int num : nums) {
            a[num]++;
        }

        for (auto &z : a) {
            if (z.second == 1)
                return z.first;
        }

        return -1; 
    }
};