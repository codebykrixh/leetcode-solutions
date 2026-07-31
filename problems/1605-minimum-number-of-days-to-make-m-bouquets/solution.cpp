class Solution {
public:
    int func(vector<int> arr, int m , int k, int mid){
        int n = arr.size();
        int cnt = 0;
        long long ans = 0;
     for(int i = 0; i<n; i++){
         if(arr[i] <= mid) cnt++;
         else{
            ans += (cnt/k);
            cnt = 0;
         }
     }
     ans += (cnt/k);
     return ans;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int low=bloomDay[0], high=bloomDay[0];
        int ans = -1;
        int n = bloomDay.size();
        long long need = 1LL * m * k;
         if (need > bloomDay.size())
            return -1;
        for(int i = 1; i<n; i++){
            if(bloomDay[i] > high) high = bloomDay[i];
            if(bloomDay[i] < low) low = bloomDay[i];
        }
        while(low <= high){
            int mid = (low + high)/2;
            int bouqiet = func(bloomDay, m , k, mid);
            if (bouqiet < m) low = mid + 1;
            else {
                ans = mid;
                high = mid - 1;
        }
    }
    return ans;
    }
};