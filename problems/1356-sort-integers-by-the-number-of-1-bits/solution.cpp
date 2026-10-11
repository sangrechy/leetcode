class Solution {
public:
    static bool fun(int x ,int y){
        int a1=0,b1=0, a =x, b=y;

        while (a){
            a=a&(a-1);
            a1++;
        }
        while (b){
            b=b&(b-1);
            b1++;
        }
        if (a1==b1){
            return x<y;
        }
        return (a1<b1);
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),fun);

        return arr;
        
    }
};