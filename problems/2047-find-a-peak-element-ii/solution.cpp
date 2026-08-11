class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        // for(int i = 0; i < n*m; i++){
        // int L = -1, R = -1, T = -1, B = -1;
        //     int row = i/m;
        //     int col = i%m;
        //     if(row > 0){
        //         T = mat[row-1][col];
        //     }
        //     if(row < n-1) 
        //         B = mat[row+1][col];
        //     if(col > 0){
        //         L = mat[row][col-1];
        //     }
        //     if(col < m-1)
        //     R = mat[row][col+1];
        
        //     if((mat[row][col] > L) && (mat[row][col] > R) && (mat[row][col] > T) && (mat[row][col] > B)){
        //         vector<int> ans;
        //         ans = {row, col};
        //         return ans;
        //     }
        // }
        // return {-1,-1};

        int low = 0, high = m - 1;
        while(low <= high){
            int mid = (low + high)/2;
            int max = -1, ind = -1;
            for(int i = 0; i < n ; i++){
                if(max < mat[i][mid]){
                    max = mat[i][mid];
                    ind = i;
                }
            }
            int left = (mid > 0) ? mat[ind][mid-1] : -1;
            int right = (mid < m-1) ? mat[ind][mid+1] : -1; 
            if(mat[ind][mid] > left && mat[ind][mid] > right) return {ind,mid};
            else if(mat[ind][mid] < left) high = mid - 1;
            else low = mid + 1;
        }
        return {-1,-1};
    }
};