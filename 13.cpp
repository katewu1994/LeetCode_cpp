class Solution {
  public:
    int value(char syb){
        switch(syb) {
            case 'I':
            return 1;
            case 'V':
            return 5;
            case 'X':
            return 10;
            case 'L':
            return 50;
            case 'C':
            return 100;
            case 'D':
            return 500;
            case 'M':
            return 1000;
        }
        return -1;
    }
    
    int romanToInt(string s) {
        int ans = 0;
        for (int i = 0;i < s.length();i++){
            int l1 = value(s[i]);
            if (i+1 != s.length()){
                int l2 = value(s[i+1]);
                if (l1 <l2){
                    ans += l2 - l1;
                    i++;
                }
                else{ans += l1;}
            }
            else{ans += l1;}
        }
        return ans;
    }
};