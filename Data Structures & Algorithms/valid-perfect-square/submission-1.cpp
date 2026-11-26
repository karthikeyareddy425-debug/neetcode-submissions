class Solution {
public:
    bool isPerfectSquare(int num) {
        int i,l,h;
        long long int mid;
        l=0;h=num;
        while(l<=h){
            mid = (l+h)/2;
            if(mid*mid == num){
                return true;
            }
            if(mid*mid < num){
                l = mid+1;
            }
            else{
                h = mid - 1;
            }
        }
        
        return false;
    }
};