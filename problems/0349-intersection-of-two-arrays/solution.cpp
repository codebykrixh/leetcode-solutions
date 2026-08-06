class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        int n1 = nums1.size();
        int n2 = nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> ans;
        while((i < n1) && (j < n2)){
            // if((nums1[i] == nums1[i-1]) || (nums2[j] == nums2[j - 1])){
            //     i++;
            //     j++;
            //     continue;
            // }
            if(nums1[i] == nums2[j]){
                if (ans.empty() || ans.back() != nums1[i])
                    ans.push_back(nums1[i]);
              i++;
              j++;
            }
            else if( nums1[i] > nums2[j]) j++;
            else{
                i++;
            }
        }
        return ans;
    }
};