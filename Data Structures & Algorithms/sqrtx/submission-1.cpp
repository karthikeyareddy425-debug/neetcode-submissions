class Solution {
public:
    int mySqrt(int x) {
        long long int l=0,h=x,mid;

        while(l<=h){
            mid = (l+h)/2;
            if(mid * mid <= x){
                l = mid + 1;
            }
            else{
                h = mid - 1;
            }
        }
        return h;
    }
};