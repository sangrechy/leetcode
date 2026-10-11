class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int e = 0;
        long long s = 0;
        long long m = pow(10,5);

        for (vector<int> i : matrix) {
            for (int j : i) {
                if (j < 0) e++;    
                if ((abs(m) > abs(j))) {
                    m = j;
                }
                
                s += abs(j);
            }
        }

        if (e % 2 != 0) {
            cout << m;
            s -= 2*abs(m);
        }

        return s;
    }
};
