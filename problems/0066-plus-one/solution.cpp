class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        int c=1;
        while (n>=0 && c==1){
            int k=digits[n]+c;
            c=0;
            if (k>9){
                k=k-10;
                c=1;
            }
            digits[n]=k;
            n--;
        }
        if (c==1){
            digits.insert(digits.begin(),1);
        }
        return digits;
        
    }
};