class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        int last= -1;
        for(int i=0; i< num.size();i++){
            if(num[i]=='1'|| num[i]=='3'||num[i]=='5'|| num[i]=='7'||num[i]=='9'){
                last=i;
            }
        }
        for(int i=0;i<=last;i++){
            ans.push_back(num[i]);

        }
        return ans;
    }
};