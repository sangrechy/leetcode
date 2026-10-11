class Solution {
public:
    bool hasAlternatingBits(int n) {
        unsigned int x=(n^(n>>1));
        x=(x&(x+1));
        return x==0;
    }
};