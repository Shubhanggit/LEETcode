class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int ,int>fr;
        int n =nums.size();
        for(int i=0;i<n;i++){
            fr[nums[i]]++;
            if(fr[nums[i]]>n/2){
                return nums[i];
            }
        }
        return -1;
    }
};