class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        long long x=0;
        for (long long i:nums){
            long long y=0;
            int k=0;
            for (int j=1;j<(int)sqrt(i)+1;j++){
                if (k>4){
                    y=0;
                    break;
                }
                if (i%j==0){
                    y=y+j+(i/j);
                    k++;
                    k++;
                    if (j*j==i){
                        k--;
                        y-=j;
                    }
                }  
            }
            if (k==4 ){
                x+=y;
                }

        }
    return x;
    }
};