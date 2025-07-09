class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int counts = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                counts++;
                maxi = max(maxi, counts);
            } else {
                counts = 0;
            }
        }
        return maxi; 
    }
};
