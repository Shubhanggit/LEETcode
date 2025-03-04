class Solution {
public:
    bool checkPowersOfThree(int n) {
       return n%3==2?0:(n>3?checkPowersOfThree(n/3):1);  
    }
};