class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string str = bitset<32>(n).to_string();
        reverse(str.begin(),str.end());
        uint32_t num = bitset<32>(str).to_ulong();
        return num;
    }
};