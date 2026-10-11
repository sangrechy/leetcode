class Solution {
public:

    void mi(vector<vector<int>>& t){
        int n=t.size();
        if (t.size()<=1){
            return;
        }
        for (int i =0;i<t[n-2].size();i++){
            if (t[n-1][i]>t[n-1][i+1]){
                t[n-2][i]+=t[n-1][i+1];
            }
            else{
                t[n-2][i]+=t[n-1][i];
            }
        }
        t.pop_back();
        mi(t);
        
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        mi(triangle);
        return triangle[0][0];
    }
};