class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        int cnt = 0;
        int n1 = nums1.size(), n2 = nums2.size();
        int n = (n1 + n2);
        int ind1 = n/2 - 1, ind2 = n/2;
        double indlen1 = -1, indlen2 = -1;
        while(i < n1 && j < n2){
            if((indlen1 != -1) && (indlen2 != -1)) break;
            if(nums1[i] < nums2[j]){
                if(cnt == ind1) indlen1 = nums1[i];
                if(cnt == ind2) indlen2 = nums2[i];
                cnt++;
                i++;
            }
            else{
                if(cnt == ind1) indlen1 = nums1[j];
                if(cnt == ind2) indlen2 = nums2[j];
                cnt++;
                j++;               
            }
        }
        while(i < n1){
                if((indlen1 != -1) && (indlen2 != -1)) break;
                if(cnt == ind1) indlen1 = nums1[i];
                if(cnt == ind2) indlen2 = nums2[i];
                cnt++;
                i++;            
        }
        while(j < n2){
                if((indlen1 != -1) && (indlen2 != -1)) break;
                if(cnt == ind1) indlen1 = nums1[j];
                if(cnt == ind2) indlen2 = nums2[j];
                cnt++;
                j++;            
        }
        if(n%2 == 0) return (double)(indlen1 + indlen2)/2.0;
        else return (double)indlen2;        
    }
};