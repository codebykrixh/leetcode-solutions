class Solution {
public:
    string largestOddNumber(string x) {
        // long long num = stoll(x);
        // while(num > 0 && num%2 == 0){
        // int last = num%10;
        // num = num -  last;
        // num = num/10;
        // }
        // if(num == 0) return "";
        // else return to_string(num);
        int n = x.size();
        int i = 0;
        while(!x.empty() && (x[n-1] - '0') % 2 == 0){
            x.pop_back();
            n = x.size();            
        }
        if(x == "") return "";
        else return x; 
    }
};