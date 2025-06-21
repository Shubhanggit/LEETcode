class Solution {
public:
    int minimumDeletions(string word, int k) {
        
        unordered_map<char, int> freq;
        for (char c : word) {
            freq[c]++;
        }

        vector<int> freq_list;
        for (auto it : freq) {
            freq_list.push_back(it.second);
        }

        sort(freq_list.begin(), freq_list.end());

        int n = freq_list.size();
        int min_deletions = INT_MAX;

        for (int i = 0; i < n; ++i) {
            int target_freq = freq_list[i];
            int deletions = 0;

            for (int f : freq_list) {
                if (f > target_freq + k) {
                    deletions += f - (target_freq + k);
                } else if (f < target_freq) {
                    deletions += f;
                }
            }

            min_deletions = min(min_deletions, deletions);
        }

        return min_deletions;
    }
};