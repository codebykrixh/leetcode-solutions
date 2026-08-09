class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(i == 0){
                nums[cnt] = nums[i];
                cnt++;
                continue;
            }

            if(nums[i] == nums[i-1]) continue;
            else{
                nums[cnt] = nums[i];
                cnt++;
            }
        }
        return cnt;
    }
};