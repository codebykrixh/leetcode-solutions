class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int L = -1, R = -1, T = -1, B = -1;
        for(int i = 0; i < n*m; i++){
            int row = i/m;
            int col = i%m;
            if(row > 0){
                T = mat[row-1][col];
            }
            if(row < n-1) 
                B = mat[row+1][col];
            if(col > 0){
                L = mat[row][col-1];
            }
            if(col < n-1)
            R = mat[row][col+1];
        
            if((mat[row][col] > L) && (mat[row][col] > R) && (mat[row][col] > T) && (mat[row][col] > B)){
                vector<int> ans;
                ans = {row, col};
                return ans;
            }
        }
        return {-1,-1};
    }
};