/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int lb=1,ub=n,mid;
        while(lb<=ub){
             mid = (lb+ub)/2;
            int r = guess(mid);
            if(r == 0){
                return mid;
            }
            if(r == 1){
                lb = mid + 1;
            }
            else{
                ub = mid - 1;
            }
            
        }
        return lb;
        
    }
};