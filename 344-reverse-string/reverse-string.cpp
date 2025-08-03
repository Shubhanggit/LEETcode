class Solution {
public:
    void reverseString(vector<char>& s) {
      int n=s.size();
      int sw=0;
      int e=n-1;
      while(sw<e){
        swap(s[sw],s[e]);
        sw++;
        e--;
      }  
    }
};