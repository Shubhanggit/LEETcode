class Solution {
public:
int mod=1e9+7;
    int lengthAfterTransformations(string s, int t) {
        vector<int>freq(26,0);
        for(char ch:s){
            freq[ch-'a']++;
        }
        while(t--){
            vector<int>next(26,0);
            for(int i=0;i<26;++i){
                if(i==25){
                    next[0]=(next[0]+freq[i])%mod;
                    next[1]=(next[1]+freq[i])%mod;
                }
                else{
                    next[i+1]+=freq[i];
                }
            }
            freq=next;
        }
        int total=0;
        for(int i:freq){
            total=(total+i)%mod;
        }
        return total%mod;
    }
};