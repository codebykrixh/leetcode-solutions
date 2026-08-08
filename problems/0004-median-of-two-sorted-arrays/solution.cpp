class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // int i = 0, j = 0;
        // int cnt = 0;
        // int n1 = nums1.size(), n2 = nums2.size();
        // int n = (n1 + n2);
        // double ind1 = n/2 - 1, ind2 = n/2;
        // double indlen1 = -1, indlen2 = -1;
        // while(i < n1 && j < n2){
        //     if((indlen1 != -1) && (indlen2 != -1)) break;
        //     if(nums1[i] < nums2[j]){
        //         if(cnt == ind1) indlen1 = (double)nums1[i];
        //         if(cnt == ind2) indlen2 = (double)nums1[i];
        //         cnt++;
        //         i++;
        //     }
        //     else{
        //         if(cnt == ind1) indlen1 = (double)nums2[j];
        //         if(cnt == ind2) indlen2 = (double)nums2[j];
        //         cnt++;
        //         j++;               
        //     }
        // }
        // while(i < n1){
        //         if((indlen1 != -1) && (indlen2 != -1)) break;
        //         if(cnt == ind1) indlen1 = (double)nums1[i];
        //         if(cnt == ind2) indlen2 = (double)nums1[i];
        //         cnt++;
        //         i++;            
        // }
        // while(j < n2){
        //         if((indlen1 != -1) && (indlen2 != -1)) break;
        //         if(cnt == ind1) indlen1 = (double)nums2[j];
        //         if(cnt == ind2) indlen2 = (double)nums2[j];
        //         cnt++;
        //         j++;            
        // }
        // if(n%2 == 0) return (double)(indlen1 + indlen2)/2.0;
        // else return (double)indlen2;        

        int n1 = nums1.size(), n2 = nums2.size();
        if(n1>n2) return findMedianSortedArrays(nums2, nums1);
        int low = 0, high = n1;
        int n = (n1 + n2);
        int left = (1 + n1 + n2)/2;
        while(low <= high){
            int mid = (low + high)/2;
            int mid2 = left - mid;
            double l1 = INT_MIN, l2 = INT_MIN;
            double r1 = INT_MAX, r2 = INT_MAX;
            if(mid < n1) r1 = (double)nums1[mid];
            if(mid2 < n2) r2 = (double)nums2[mid2];
            if(mid - 1 >= 0) l1 = (double)nums1[mid - 1];
            if(mid2 - 1 >= 0) l2 = (double)nums2[mid2 - 1];
             
            if(l1 <= r2 && l2 <= r1){
                if(n%2 == 0) return (((double)(max(l1,l2) + min(r1,r2)))/2.0);
                else return (double)max(l1,l2);
            }
            else if(l1 > r2) high = mid - 1;
            else low = mid + 1;
        }
        return 0;
    }
};