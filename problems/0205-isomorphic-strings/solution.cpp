class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.length();
        long long k = 5 * 10 * 10 * 10 * 10;
        vector<int> arr(k, 0);
        for(int i = 0; i < n ; i++){
            if(arr[(int)s[i]] == 0) 
            arr[(int)s[i]] = (int)t[i];
            else{
                if(arr[(int)s[i]] != (int)t[i]) return false;
            }

        }
        return true;
    }
};