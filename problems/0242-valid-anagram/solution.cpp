class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        int freq[256] = {0};
        for(int i=0;i<s.size();i++){
            char c=s[i];
            freq[(unsigned char)c]++;
        }
        for(int i=0;i<t.size();i++){
            char c=t[i];
            freq[(unsigned char)c]--;
        }
        for (int i = 0; i < 256; i++) {
            if (freq[i] != 0) return false;
        }
        return true;
    }
};