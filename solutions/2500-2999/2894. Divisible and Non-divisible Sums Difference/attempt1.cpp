class Solution {
public:
    int differenceOfSums(int n, int m) {
        int nd = 0;
        int d = 0;

        for (int i = 1; i <= n; i++) {
            if (i % m == 0) {
                d = i + d;
            } else {
                nd = i + nd;
            }
        }
        int diff = nd - d;
        return diff;
    }
};
