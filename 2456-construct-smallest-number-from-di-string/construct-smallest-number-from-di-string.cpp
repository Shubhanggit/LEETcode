class Solution {
public:
    string smallestNumber(string p) {
        int n = p.size();
        string s = ""; 
        for (int i = 0; i <= n; i++) {
            s += '0' + i + 1;
        } 
        for (int i = 0; i < n; i++) {
            if (p[i] == 'D') {
                int j = i;
                while (j < n && p[j] == 'D') j++; 
                reverse(s.begin() + i, s.begin() + j + 1);
                i = j;
            }
        }  
        return s;
    }
};