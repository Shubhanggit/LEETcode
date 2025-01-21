class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = nums[0]; 
        int cou = 1; 
        for(int i=1; i<nums.size(); i++) {
            if(cou == 0) {
                ans = nums[i]; 
            }
            if(nums[i] == ans) {
                cou++; 
            } else {
                cou--;
            }
        }
        return ans;
    }
};