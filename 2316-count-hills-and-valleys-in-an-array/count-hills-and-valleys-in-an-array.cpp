class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=1;i<n-1;i++){
            if(nums[i]==nums[i-1]) continue;
            int p =i-1;
            while(p >=0&& nums[p]== nums[i]) p--;
            int ne=i+1;
            while(ne < n && nums[ne]== nums[i]) ne++;
            if(p>=0 && ne<n){
                if((nums[i]> nums[p]&& nums[i]> nums[ne])|| (nums[i]< nums[p]&& nums[i]< nums[ne])){
                    count++;
                }
            } 
            
        }
        return count;
    }
};