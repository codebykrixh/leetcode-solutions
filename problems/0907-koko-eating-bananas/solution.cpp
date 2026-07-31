class Solution {
public:
    int Maxelen(vector<int> piles){
        int n = piles.size();
        int ans = piles[0];
        for(int i = 1; i<n;i++){
            if(piles[i] > ans)  ans = piles[i];
        }
        return ans;
    }
    int func(vector<int> piles, int mid, int n){
        int totalhrs = 0;
        for(int i = 0; i < n; i++){
            totalhrs += ceil((double)piles[i]/mid);
        }
        return totalhrs;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1, high = Maxelen(piles);
        while(low <= high){
            int mid = (low + high)/2;
            int k = func(piles, mid, n);
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