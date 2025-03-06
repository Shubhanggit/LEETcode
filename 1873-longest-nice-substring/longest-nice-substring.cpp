class Solution {
public:
    string longestNiceSubstring(string s) {
        unordered_set<char> set(s.begin(), s.end());
        int n = s.length();

        for (int i = 0; i < n; i++) {
            char c = s[i];
            if (set.count(tolower(c)) && set.count(toupper(c))) {
                continue;
            }

            string prev = longestNiceSubstring(s.substr(0, i));
            string next = longestNiceSubstring(s.substr(i + 1));

            return prev.length() >= next.length() ? prev : next;
        }

        return s;
    }
};
