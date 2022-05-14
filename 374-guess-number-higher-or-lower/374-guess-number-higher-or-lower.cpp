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
        long l=1;
        long h=n;
        long mid;
        while(l<=h){
            mid=(h-l)/2 +l;
            if(guess(mid)==1){
                l=mid+1;
            }
            else if(guess(mid)==-1){
                h=mid-1;
            }
            else if(guess(mid)==0){
                return mid;
            }
        }
        return -1;
    }
};