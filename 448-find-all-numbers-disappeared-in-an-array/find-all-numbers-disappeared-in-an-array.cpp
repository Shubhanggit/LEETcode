class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for (int num : nums) {
            int i = abs(num) - 1;
            if (nums[i] > 0)  
                nums[i] = -nums[i];
        }
        
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) ans.push_back(i + 1);
        }
        
        return ans;
    }
};
