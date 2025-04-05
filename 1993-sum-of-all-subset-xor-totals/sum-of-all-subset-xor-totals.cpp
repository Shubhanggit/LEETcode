class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        return backtrack(nums, 0, 0);
    }

    int backtrack(vector<int>& nums, int xorr, int currsize) {
        if (currsize == nums.size()) 
            return xorr; 
        int exclude = backtrack(nums, xorr, currsize + 1); 
        int include = backtrack(nums, xorr ^ nums[currsize], currsize + 1); 
        return exclude + include; 
    }
};