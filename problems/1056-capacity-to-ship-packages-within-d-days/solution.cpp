class Solution {
public:
    int func(vector<int> weights, int mid){
        int ans = 0, cnt = 0, i =0;
        int n = weights.size();
        while(i < n){
            if(ans + weights[i] > mid){
                cnt++;
                ans = 0;
            }
            ans += weights[i];
            i++;
        }
        cnt++;
        return cnt;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = weights[0], high = weights[0];
        int n = weights.size();
        for(int i = 1; i< n; i++){
           if(weights[i] > low) low = weights[i];
           high += weights[i]; 
        }
        while(low <= high){
            int mid = (low + high)/2;
            int noofd = func(weights, mid);
            if(noofd > days) low = mid + 1;
            else high = mid - 1;
        }
        return low;
    }
};