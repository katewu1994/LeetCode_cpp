class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)){return false;}
        else
        {
            long n = 0;
            int y = x;
            while(y)
            {
                n = n*10 + y%10;
                y /= 10;
            }
            if (x == n){return true;}
            else{return false;}
        }
    }
};