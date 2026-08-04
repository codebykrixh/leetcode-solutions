class Solution {
public:
    int mySqrt(int x) {
        int low = 0, high = x;
        while(low <= high){
            int mid = (low + high)/2;
            if((long long)mid*mid == x) return mid;
            else if(((long long)mid*mid < x) && ((long long)(mid + 1)*(mid + 1) > x)) return mid;
            else if((long long)mid*mid < x) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }
};