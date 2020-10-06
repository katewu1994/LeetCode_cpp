class Solution {
public:
    int mySqrt(int x) {
        
        if (x == 0)
            return 0;
        if (x < 4 && x > 0)
            return 1;
        
        int a = 1;
        
        for (int i = 1; i <= int(x/2); i++){
            long long sq = (long long)i * i;
            
            if(sq < x)
                a = i;
            if(sq == x){
                 a= i;
                break;
            }
            if (sq > x){
                a = i - 1;
                break;
            }
        }
        return a;
    }
};