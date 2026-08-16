class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int cnt = 0;
        int m = strs[0].length();
        int j = 0;
        int flag = 0;
        while(j < m){
        for(int i = 0; i < n; i++){
            if(strs[i][j] != strs[0][j]){
            flag = 1;
            break;
            } 
        }
        if(flag == 1) break;
        cnt++;
        j++;
        }
        if(cnt == 0) return "";
        return strs[0].substr(0,cnt);
    }
};