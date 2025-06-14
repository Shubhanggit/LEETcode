class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

int res = 0 ,  n = nums.size() ,  mini_diff = INT_MAX;


for(int i = 0; i < n-2; i++)
{
    int left = i + 1 , right = n - 1;
    
    
    while(left < right)
    {
        int sum = nums[i] + nums[left] + nums[right];
if(abs(target - sum) < mini_diff)  mini_diff = abs(target - sum), res = sum;
        
        if(sum > target)  right--;
          
        else   left++;
          
    }
}

return res;
    }
};