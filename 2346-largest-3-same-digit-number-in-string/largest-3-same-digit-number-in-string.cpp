class Solution {
public:
    string largestGoodInteger(string num) {
        string m="";
        for(int i=0;i<num.size()-2;i++){
            if(num[i]==num[i+1]&& num[i]==num[i+2]){
                string curr= num.substr(i,3);
                if(curr>m){
                    m=curr;
                }
            }
        }
        return m;
    }
};