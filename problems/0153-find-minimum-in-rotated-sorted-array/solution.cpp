class Solution {
public:
    int findMin(vector<int>& nums) {
    stack<int> st;
    int n=nums.size();
    for(int i=0;i<n;i++){
    if(st.empty())  st.push(i);
    if(nums[i]<nums[st.top()]) st.push(i);
       }
       return nums[st.top()];
    }
};