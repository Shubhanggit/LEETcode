class Solution {
public:
    int strStr(string haystack, string needle) {
        long long sum_needle=0,sum_window=0;
        int n=haystack.size(),m=needle.size();
        int i=0,j=m-1;

        for(char c: needle){
            sum_needle+=c-'a';
        }
        
        for(int k=i;k<=j;k++){
            sum_window+=haystack[k]-'a';
        }

        while(j<n){

            if(sum_window == sum_needle){
                int flag=0;

                for(int k=i;k<=j;k++){

                    if(haystack[k]!=needle[k-i]){
                        flag=1;break;
                    }

                }
                if(!flag) 
                    return i;
            }

            if(j<n)
            {
                sum_window -= haystack[i] - 'a';
                sum_window += haystack[j + 1] - 'a';
            }
            i++;j++;
        }
        
        return -1;
    }
};