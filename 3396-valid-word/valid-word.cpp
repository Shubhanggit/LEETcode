class Solution {
public:
    bool isValid(string word) {
        if (word.length()<3)
        return false;
        bool hV=false;
        bool hC= false;
        for (char ch: word){
            if(!isalnum(ch))
            return false;
            if(isalpha(ch)){
                char lowerC= tolower(ch);
                if(lowerC=='a'|| lowerC=='e'|| lowerC=='i'|| lowerC=='o'|| lowerC=='u')
                hV=true;
                else 
                hC=true;
            }

        }
        return hV&&hC;
    }
};