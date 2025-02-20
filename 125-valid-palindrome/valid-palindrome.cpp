class Solution {
public:
    bool fun(string &temp,int l, int r){
        if(l>=r) return true;
        if(temp[l]==temp[r]){
            return fun(temp,l+1,r-1);
        }
        return false;
    }
    bool isPalindrome(string s) {
        string temp;
        for(int i=0;i<s.size();i++){
            if( s[i] < '0' || s[i] > '9' && s[i] < 'A' || s[i] > 'Z' && s[i] < 'a' || s[i] > 'z' )continue;
            else{
                temp.push_back(tolower(s[i]));
            }
        }
        int l=0;
        int r=temp.size()-1;
        return fun(temp,l,r);
    }
};