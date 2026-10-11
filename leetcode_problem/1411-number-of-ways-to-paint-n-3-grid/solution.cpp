class Solution {
public:
    int numOfWays(int n) {
        long long m=pow(10,9)+7;
        long long a=6;
        long long b=6;
        for (int i=2;i<=n;i++){
            long long a1=(3*a+2*b)%m;
            b=(2*(a+b))%m;
            a=a1;
        }
        return (a+b)%m;
    }
};