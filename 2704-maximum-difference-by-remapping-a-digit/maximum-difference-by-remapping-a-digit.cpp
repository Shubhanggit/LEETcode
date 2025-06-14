class Solution {
public:
    int getMaxi(string s, int n) {
        for (int i = 0; i < n; i++) {
            char ch = s[i];
            if (ch != '9') {
                replace(s.begin(), s.end(), ch, '9');
                break;
            }
        }
        return stoi(s);
    }

    int getMini(string s, int n) {
        for (int i = 0; i < n; i++) {
            if (s[i] != '0') {
                char ch = s[0];
                replace(s.begin(), s.end(), ch, '0');
                break;
            }
        }
        return stoi(s);
    }

    int minMaxDifference(int num) {
        string str = to_string(num);
        int n = str.length();
        int maxi = getMaxi(str, n);
        int mini = getMini(str, n);
        return maxi - mini;
    }
};