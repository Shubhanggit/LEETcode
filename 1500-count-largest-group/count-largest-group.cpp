class Solution {
public:
    int countLargestGroup(int n) {
        vector<int> v(100, 0);  
        for (int i = 1; i <= n; i++) {
            int sum = 0, temp = i;
            while (temp) {
                sum += temp % 10;
                temp /= 10;
            }
            v[sum]++;
        }

        sort(v.begin(), v.end());
        int ans = v[v.size() - 1];
        int count = 0;

        for (int i = v.size() - 1; i >= 0; i--) {
            if (v[i] == ans) count++;
            else break;
        }
        return count++;
    }
};