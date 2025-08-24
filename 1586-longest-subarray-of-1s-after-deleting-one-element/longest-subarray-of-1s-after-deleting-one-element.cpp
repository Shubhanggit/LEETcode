/*class Solution {
public:
int n;
    int findMax(vector<int>&nums, int skip_idx){
        int cl=0;
        int ml=0;
        for(int i=0; i<n; i++){
            if(i== skip_idx)
            continue;
            if(nums[i]==1){
                cl++;
                ml=max(ml,cl);

            }else{
                cl=0;
            }
        }
        return ml;

    }
    int longestSubarray(vector<int>& nums) {
      n=nums.size();
     int r=0;
     int countz=0;
     for(int i=0; i<n; i++){
        if(nums[i]==0){
            countz++;
            r= max(r,findMax(nums,i));
        }
     }  
     if(countz==0){
        return n-1;
     }
     return r; 
    }
};*/
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0, zeros = 0, res = 0;
        
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == 0) zeros++;
            
            while (zeros > 1) {
                if (nums[left] == 0) zeros--;
                left++;
            }
            
            res = max(res, right - left);
        }
        
        return res;
    }
};