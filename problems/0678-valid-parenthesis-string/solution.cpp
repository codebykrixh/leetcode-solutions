class Solution {
public:
    bool checkValidString(string s) {
        int n = s.size();
        // int cntl = 0, cntr = 0, cnt = 0, flag = 0;
        // for(int i = 0; i < n; i++){
        //    if((cntl + cnt) < cntr) return false;
        //    if(cntl == cntr && s[i] == '*') flag = 1;
        //    if(s[i] == '(') cntl++;
        //    if(s[i] == '*') cnt++;
        //    if(s[i] == ')') cntr++;
        // }
        // if(cntl > cntr){
        //     if(cntl > cntr + cnt || flag == 1) return false;
        //     else return true;
        // }
        // else if(cntl < cntr){
        //     if(cntl + cnt < cntr) return false;
        //     else return true;
        // }
        // return true;
        int low = 0, high = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                low++;
                high++;
            }
            else if(s[i] == ')'){
                low--;
                high--;
            }
            else{
                low--;
                high++;
            }
            if(high < 0) return false;
            if(low < 0) low = 0;
        }
        return (low == 0);
    }
};