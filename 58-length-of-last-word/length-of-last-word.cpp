class Solution {
public:
    int lengthOfLastWord(string s) {
        int flag = 0 , count = 0;
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] == ' ')
            {
                flag = 1;
            }
            else 
            {
                if(flag == 1)
                {
                    flag = 0;
                    count = 1;
                }
                else
                {
                    count++;
                }
            }
        }
        return count++ ;
    }
};