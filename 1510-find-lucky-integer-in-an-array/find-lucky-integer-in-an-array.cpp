class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> freq;
        for (int x : arr) freq[x]++;

        int best = -1;
        for (auto &[val, cnt] : freq)
            if (val == cnt)
                best = max(best, val);

        return best;        
    }
};