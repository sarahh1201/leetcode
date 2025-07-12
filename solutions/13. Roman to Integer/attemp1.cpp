class Solution {
public:
    int romanToInt(string s) {
        map<char, int> num = {{'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
                              {'C', 100}, {'D', 500}, {'M', 1000}};

        int total = 0;
        int n = s.length();

        for (int i = 0; i < n; ++i) {
            int value = num[s[i]];
            int next = (i + 1 < n) ? num[s[i + 1]] : 0;

            if (value < next) {
                total -= value;
            } else {
                total += value;
            }
        }

        return total;
    }
};
