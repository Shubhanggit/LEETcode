class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> v(n+1, 0);
        for(const auto& q : queries){
            v[q[0]]++; 
            if(q[1] + 1 < n) v[q[1] + 1]--;  
        } 
        int cnt = 0;
        for(int i = 0; i < n; i++){
            cnt += v[i];
            if(nums[i] > cnt) return false;
        }
        return true;
    }
};