class Solution {
public:
    int maximumCandies(vector<int>& A, long long k , int l = 0 , int r = 1e7) {
        while(l < r){
            int m = (l + r + 1)/2; long s = 0;
            for(auto p : A) s += p/m;
            if(s < k) r = m - 1; else l = m;
        }
        return l;
    }
};