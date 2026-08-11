class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        for(int i = 0; i <n; i++){
            for(int j = 0; j < m; j++){
                if(i == 0){
                    if(j == 0){
                        if(mat[i][j] > mat[i+1][j] && mat[i][j] > mat[i][j+1])
                         return {i,j};
                    }
                    else if(j == m - 1){
                        if(mat[i][j] > mat[i+1][j] && mat[i][j] > mat[i][j-1])
                         return {i,j};
                    }
                    else{
                        if(mat[i][j] > mat[i+1][j] && mat[i][j] > mat[i][j-1] && mat[i][j] > mat[i][j+1])
                         return {i,j};    
                        }
                }
                if(i ==  n - 1){
                    if(j == 0){
                        if(mat[i][j] > mat[i-1][j] && mat[i][j] > mat[i][j+1])
                         return {i,j};
                    }
                    else if(j == m - 1){
                        if(mat[i][j] > mat[i-1][j] && mat[i][j] > mat[i][j-1])
                         return {i,j};
                    }
                    else{
                        if(mat[i][j] > mat[i-1][j] && mat[i][j] > mat[i][j-1] && mat[i][j] > mat[i][j+1])
                         return {i,j};                    }
                }
                if(j == 0){
                    if(i > 0 && i < n-1){
                    if(mat[i][j] > mat[i-1][j] && mat[i][j] > mat[i+1][j] && mat[i][j] > mat[i][j+1]) return {i,j};
                }
                }
                if(j == m-1){
                    if(i > 0 && i < n-1){
                    if(mat[i][j] > mat[i-1][j] && mat[i][j] > mat[i+1][j] && mat[i][j] > mat[i][j-1]) return {i,j};
                }
                }
                else{
                    if(i > 0 && i < n-1 && j > 0 && j < n-1){
                    if(mat[i][j] > mat[i-1][j] && mat[i][j] > mat[i+1][j] && mat[i][j] > mat[i][j-1] && mat[i][j] > mat[i][j+1]) return {i,j};
                }
                }
            }
        }
        return {-1,-1};
    }
};