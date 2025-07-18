class Solution {
public:
    int commonFactors(int a, int b) {
        int n = a > b ? b : a;
        int count = 0;
        for (int i = n; i > 0; i--) {
            if (a % i == 0 && b % i == 0) {
                count++;
            }
        }
        return count;
    }
};
