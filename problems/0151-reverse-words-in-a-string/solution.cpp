#include<bits/stdc++.h>
class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        // reverse(s.begin(), s.end());

        // int n = s.size();
        // int i = 0, j = 0;

        // while (i < n) {
        //     // Skip spaces
        //     while (i < n && s[i] == ' ')
        //         i++;

        //     if (i >= n)
        //         break;

        //     // Add one space between words
        //     if (j > 0)
        //         s[j++] = ' ';

        //     int start = j;

        //     // Copy current word
        //     while (i < n && s[i] != ' ') {
        //         s[j++] = s[i++];
        //     }

        //     // Reverse this word back
        //     reverse(s.begin() + start, s.begin() + j);
        // }

        // s.resize(j);
        int i = n-1, j = 0;
        string ans;
        while(i >= 0){
            while(i >= 0 && s[i] == ' ') i--;
            if(i >= 0 && j > 0) ans.push_back(' ');
            int end = i;
            while(i >= 0 && s[i] != ' '){
                ans.push_back(s[i]);
                i--;
            }
            int len = end - i;
            reverse(ans.begin() + j , ans.begin() + len + j);
            j = len + 1 + j;
        }
        // if(s[n-1] == ' ') ans.pop_back();
        // reverse(ans.begin(), ans.end());
        return ans;
    }
};