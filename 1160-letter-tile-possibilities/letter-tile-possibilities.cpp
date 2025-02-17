class Solution {
public:
    int createWord(vector<int>& char_count) {
        int total = 0;
        for (int i = 0; i < 26; ++i) {
            if (char_count[i] == 0) continue;
            char_count[i]--;
            total += 1 + createWord(char_count);
            char_count[i]++;
        }
        return total;
    }
    
    int numTilePossibilities(string tiles) {
        vector<int> char_count(26, 0);
        for (char c : tiles) {
            char_count[c - 'A']++;
        }
        return createWord(char_count);
    }
};