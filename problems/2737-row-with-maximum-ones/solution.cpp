class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        // for(int i = 0; i< rows; i++){
        // sort(mat[i][0], mat[i][cols - 1]);
        // }
        vector<int> ans(2,-1);
    for(int i = 0; i < rows; i++){
        int cnt = 0;
        for(int j = 0; j < cols; j++){
            if(mat[i][j] == 1) cnt++;
        }
        if(cnt > ans[1]){
            ans[1] = cnt;
            ans[0] = i;
        }
        }
        return ans;
    }
};