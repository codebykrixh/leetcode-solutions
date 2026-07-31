class Solution {
public:
    int Maxelen(vector<int> piles){
        int n = piles.size();
        long long ans = piles[0];
        for(int i = 1; i<n;i++){
            if(piles[i] > ans)  ans = piles[i];
        }
        return ans;
    }
    long long func(vector<int> piles, int mid, int n){
        long long totalhrs = 0;
        for(int i = 0; i < n; i++){
            totalhrs += ceil((double)piles[i]/mid);
        }
        return totalhrs;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        long long low = 1, high = Maxelen(piles);
        while(low <= high){
            long long mid = (low + high)/2;
            long long k = func(piles, mid, n);
            if(k <= h){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};