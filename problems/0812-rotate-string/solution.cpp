class Solution {
public:
    bool rotateString(string s, string goal) {
        // int n = s.length();
        // int ind = -1;
        // for(int i = 0; i < n; i++){
        //     if(s[0] == goal[i]){
        //         ind = i;
        //         break;
        //     }
        // }
        // if(s[0] == s[n-1]) ind++;
        // if(ind == -1) return false;
        // for(int i = 0; i< n; i++){
        //     if(ind == n) ind = ind - n;
        //     if(s[i] != goal[ind]) return false;
        //     ind++;
        // }
        // return true;
        int n = s.size();
        int m = goal.size();
        if(n != m) return false;
        string num = s + s;
        return (num.find(goal) != string::npos);
    }
};