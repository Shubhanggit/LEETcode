class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long volume=(long long)length*width*height;
        bool isbulky= (volume>=1000000000|| width>=10000|| length>=10000|| height>=10000||mass>=10000);
        bool isheavy=(mass>=100);
        if(isbulky&& isheavy) return"Both";
        else if(isbulky) return"Bulky";
        else if(isheavy) return"Heavy";
        else return"Neither";

    }
};