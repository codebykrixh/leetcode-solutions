class Solution {
public:
    int mySqrt(int x) {
        int low = 1, high = x;
        while(low <= high){
            int mid = (low + high)/2;
            if((mid*mid) == x) return mid;
            else if(((mid*mid) < x) && ((mid + 1)*(mid + 1) > x)) return mid;
            else if((mid*mid) < x) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }
};