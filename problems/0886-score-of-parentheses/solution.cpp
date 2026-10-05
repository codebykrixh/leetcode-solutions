// class Solution {
// public:
//     int scoreOfParentheses(string s) {
//         int n = s.size();
//         unordered_map<int, int> mpp;
//         int cntl = 0;
//         int sum = 0;
//         for(int i = 0; i < n; i++){
//             if(s[i] == '(') cntl++;
//             else{
//                 mpp[cntl - 1]++;
//                 if(mpp[cntl] > 0) sum += 2 * mpp[cntl];
//                 else{
//                 if(cntl <= 1){
//                 sum++;
//                 }
//                 }
//                 cntl--;
//             }

//         }
//         return sum;
//     }
// };
class Solution {
public:
    int scoreOfParentheses(string s) {
        int depth = 0;
        int ans = 0;

        for(int i = 0; i < s.size(); i++) {

            if(s[i] == '(') {
                depth++;
            }
            else {
                depth--;

                if(s[i-1] == '(') {
                    ans += (1 << depth);
                }
            }
        }

        return ans;
    }
};