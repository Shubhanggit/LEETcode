class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int n = nums.size();
        long long ans = 0;
        sort(nums.begin(), nums.end());

        for(int i=0; i<n; i++){
            int l = i + 1, r = n - 1;
            int least = lower - nums[i];
            while(l<=r){
                int mid = (l + r)/2;
                if(nums[mid]>=least) r = mid - 1;
                else l = mid + 1;
            }
            // index of the smallest number so that nums[i] + nums[ind1] >= lower
            int ind1 = l;   

            l = i + 1, r = n - 1;
            int most = upper - nums[i];
            while(l<=r){
                int mid = (l + r)/2;
                if(nums[mid]<=most) l = mid + 1;
                else r = mid - 1;
            }
            // index of the greatest number so that nums[i] + nums[ind2] <= upper
            int ind2 = r;
            ans += (ind2 - ind1 + 1);
        }

        return ans;
    }
};