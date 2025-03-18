class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int> res{1};
        if(n==1) return res ; 
        
        while(res.size()<n){
            vector<int> tmp;
            for(int i  :res){
                if(2*i <= n){
                    tmp.push_back(2*i);
                }
            }
             for(int i  :res){
                if(2*i -1 <= n){
                    tmp.push_back(2*i-1);
                }
            }
            res = tmp;
        }
        return res;
    }
};