class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
        int n = nums.size();
        unordered_map<int, int> hashmap;
        hashmap[0] = 1;
        long long ans = 0;
        int prefix = 0;
        for (int i = 0; i < n; i++){
            prefix += ((nums[i] % modulo) == k);
            ans += hashmap[(prefix + modulo - k) % modulo];
            hashmap[prefix % modulo]++;
        }
        return ans;
    }
};