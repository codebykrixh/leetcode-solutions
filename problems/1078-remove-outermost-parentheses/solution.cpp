class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        int i = 0;
        int cnt = 0,start = 0;
        string ans;
        while(i < n){
        if( s[i] == '(' ) cnt++;
        else if(s[i] == ')') cnt--;
        if((cnt != 0 && cnt != 1) || (cnt == 1 && s[i] == ')')){
          ans.push_back(s[i]);
        }
        i++;
        }
        return ans;
    }
};