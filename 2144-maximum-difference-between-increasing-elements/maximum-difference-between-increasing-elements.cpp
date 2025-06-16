class Solution {
public:
    int maximumDifference(vector<int>& num) {
     int diff = -1;
     int n = num.size();
     for (int i =0 ;i<n; i++){
        for (int j =i+1;j<n ; j++){
            if(num[j]>num[i]){
                diff = max(diff , num[j]-num[i]);
            }
        }
     }   
     return diff;
    }
};