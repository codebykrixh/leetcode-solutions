class Solution {
public:
    int funct(vector<int> nums, int threshold, int mid){
        int ans = 0;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            ans += ceil((double)nums[i]/mid);
        }
        if(ans <= threshold) return 1;
        return 0;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = nums[0], high = nums[0];
        for(int i = 1;i<n;i++){
            if(nums[i] > high) high = nums[i];
            if(nums[i] < low) low = nums[i];
        }
        while(low <= high){
            int mid = (low + high)/2;
            if(funct(nums, threshold, mid) == 1) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};