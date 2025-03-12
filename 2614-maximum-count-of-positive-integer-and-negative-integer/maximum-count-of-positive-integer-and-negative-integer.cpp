class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int p=0;
        int ne=0;
        int n= nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>0)p++;
            if(nums[i] < 0)ne++;
        }
        return max(p,ne);
    }
};