class Solution {
public:
    bool isPowerOfFour(int n) {
        for (int i = 0; i < 32; i++) {
            if (n >= pow(4, i)) {
                if (n == pow(4, i)) {
                    return true;
                }
            } else {
                break;
            }
        }
        return false;
    }
};
