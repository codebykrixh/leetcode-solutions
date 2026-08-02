class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i = 0, number = 1, ans = -1;
        int n = arr.size();
        while((k > 0) && (i < n)){
             if(arr[i] != number){
                ans = number;
                k--;
             }
             else{
                i++;
             }
             number++;
        }

        while(k > 0){
            ans = number;
            k--;
            number++;
        }
        return ans;
    }
};