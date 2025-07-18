class Solution {
public:
    bool isThree(int n) {
        int count = 0;
        for (int i = n; i > 0; i--) {
            if (n % i == 0) {
                count++;
            }
        }
        return count == 3 ? true : false;
    }
};
