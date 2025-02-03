class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = 0;
        for(char s1 : s) ans ^= s1;
        for(char s2 : t) ans ^= s2;
        return ans;
    }
};