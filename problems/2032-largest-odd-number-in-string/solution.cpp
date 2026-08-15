class Solution {
public:
    string largestOddNumber(string x) {
        int num = stoi(x);
        while(num > 0 && num%2 == 0){
        int last = num%10;
        num = num -  last;
        num = num/10;
        }
        if(num == 0) return "";
        else return to_string(num);
    }
};