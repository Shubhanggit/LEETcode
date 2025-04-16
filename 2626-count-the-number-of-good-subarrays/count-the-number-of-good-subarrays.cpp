class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        long long cnt = 0;
        long long pairs = 0;
        unordered_map<int, int> freq;
        
        int start = 0;
        
        for (int end = 0; end < nums.size(); ++end) {
            freq[nums[end]]++;
            pairs += freq[nums[end]] - 1;
            
            while (pairs >= k) {
                cnt += nums.size() - end;
                freq[nums[start]]--;
                pairs -= freq[nums[start]];
                start++;
            }
        }
        
        return cnt;
    }
};
