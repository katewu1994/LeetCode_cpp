class Solution {
public:
    string addBinary(string a, string b) {
        int sum = 0;
        int m = a.size() - 1;
        int n = b.size() - 1;
        bool carry = false;
        string ans = "";
        while(carry || m >= 0 || n >= 0){
            sum = 0;
            if(carry) 
                sum ++;
            if (m >= 0 && a[m --] == '1')
                sum ++;
            if (n >= 0 && b[n --] == '1')
                sum ++;
            if (sum == 1 || sum == 3)
                ans = '1' + ans;
            else 
                ans = '0' + ans;
            carry = sum >= 2;
        }
        return ans;
    }
};