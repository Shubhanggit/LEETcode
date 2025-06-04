class Solution {
public:
    string answerString(string word, int numFriends) {
        if(numFriends==1) return word;

        int wordLength = word.size();
        int ansLength = wordLength-(numFriends-1);

        char largest = 'a';
        for(char c:word) {
            largest = max(largest, c);
        }

        string ans = "";

        for(int i=0; i<wordLength; i++) {
            char c = word[i];
            if(c == largest) {
                string s = word.substr(i, ansLength);
                ans = max(ans, s);
            }
        }

        // cout << largest << endl;


        return ans;
    }
};