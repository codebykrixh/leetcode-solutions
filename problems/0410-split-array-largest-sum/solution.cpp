class Solution {
public:

    int fn(vector<int> &nums, int mid){
        int n = nums.size();
        int stucnt = 1, pges = 0;
        for(int i = 0; i<n; i++){
            if((nums[i] + pges) <= mid) pges +=nums[i];
            else{
                pges = nums[i];
                stucnt++;
            }
        }
        return stucnt;
    }

    int sum(vector<int> &nums){
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i<n;i++){
           sum += nums[i];
        }
        return sum;
    }
   
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int low = *max_element(nums.begin(), nums.end());
        int high = sum(nums);
        while( low <= high ){
            int mid = (low + high)/2;
            int cnt = fn(nums, mid);
            if(cnt > k) low = mid + 1;
            else high = mid - 1;
        }
        return low;
    }
};