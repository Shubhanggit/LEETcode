class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        string fin = s1 + " " + s2;
        vector<string> ans;
        stringstream s(fin);
        string word;
        unordered_map<string, int> mp;
        while (s >> word) {
            mp[word]++;
        }
        for (auto it : mp) {
            if (it.second == 1)
                ans.push_back(it.first);
        }
        return ans;
    }
};