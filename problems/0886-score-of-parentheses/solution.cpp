class Solution {
public:
    int scoreOfParentheses(string s) {
        int n = s.size();
        int sumf = 0, sumb = 0, cnt = 0, temp = 0;
        for(int i = 0; i < n; i++){
           if(s[i] == '(') cnt++;
           else{
            if(cnt == 1){
                if(temp != 0)
                sumf += temp * 2;
                else sumf++;
                temp = 0;
            }
            else temp++;
            cnt--;
           }
        }
        return sumf;
    }
};