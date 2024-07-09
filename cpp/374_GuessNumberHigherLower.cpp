/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

// class Solution {
// public:
//     int guessIf(int n){
//         if(guess(n) == 0)
//             return n;
//         else if(guess(n) == - 1)
//             return guessIf(--n);
//        else
//         return guessIf(++n);

//     }
//     int guessNumber(int n) {
//         return guessIf(n);
//     }
// };

class Solution
{
public:
    int guessNumber(int n)
    {
        int s = 1, e = n, mid;
        while (s < e)
        {
            mid = (e - s) / 2 + s;
            if (guess(mid) == 0)
                return mid;
            else if (guess(mid) == 1)
                s = mid + 1;
            else
                e = mid - 1;
        }
        return s;
    }
};