class Solution {
public:
    vector<int> diStringMatch(string s) {
       int n =s.size();
       vector<int>p(n+1);
       int l=0;
       int h=n;
       for(int i=0; i<n; i++){
        if(s[i]=='I'){
            p[i]=l;
            l++;

        }else{
            p[i]=h;
            h--;
        }
       } 
       p[n]=l;
       return p;
    }
};