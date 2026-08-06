class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> ans;
        while((i < n1) && (j < n2)){
            if(nums1[i] == nums2[j]) ans.push_back(nums1[i]);
            else if( nums1[i] > nums2[j]) j++;
            else{
                i++;
            }
        }
        return ans;
    }
};