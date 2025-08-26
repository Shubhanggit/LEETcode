class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxdig=0;
        int maxarea=0;
        for(auto &d: dimensions){
            int l=d[0], w=d[1];
            int digsq = l * l + w * w;
            int area = l*w;
            if(digsq> maxdig){
                maxdig=digsq;
                maxarea=area;
            }else if(digsq==maxdig && area> maxarea){
                maxarea =area;
            }

        }
        return maxarea;
    }
};