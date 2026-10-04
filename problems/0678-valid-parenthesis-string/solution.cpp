class Solution {
public:
    bool checkValidString(string s) {
        int n = s.size();
        int cntl = 0, cntr = 0, cnt = 0;
        for(int i = 0; i < n; i++){
           if(cntl == 0 && cnt == 0 && cntr != 0) return false;
           if(s[i] == '(') cntl++;
           if(s[i] == '*') cnt++;
           if(s[i] == ')') cntr++;
        }
        if(cntl > cntr){
            if(cntl != cntr + cnt) return false;
            else return true;
        }
        else if(cntl < cntr){
            if(cntl + cnt != cntr) return false;
            else return true;
        }
        return true;
    }
};