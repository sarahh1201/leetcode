class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0)
        {
            return false;
        }
        int original = x;
        long long reversed =0;
        while(x>0)
        {
            int num = x % 10;
            reversed = reversed * 10 + num;
            x/=10;
        }
        return original==reversed;
    }
};
