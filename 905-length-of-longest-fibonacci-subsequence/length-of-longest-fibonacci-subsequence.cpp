
class Solution {
public:
    int lenLongestFibSubseq(std::vector<int>& arr) {
        int n = arr.size();
        std::unordered_set<int> set(arr.begin(), arr.end());
        int maxLength = 0;

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int a = arr[i], b = arr[j], len = 2;
                while (set.count(a + b)) {
                    int temp = a + b;
                    a = b;
                    b = temp;
                    len++;
                }
                maxLength = std::max(maxLength, len);
            }
        }

        return maxLength > 2 ? maxLength : 0;
    }
};